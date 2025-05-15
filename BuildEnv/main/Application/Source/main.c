/*Includes for the ESP-IDF*/
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "protocol_examples_common.h"

#include "lwip/err.h"
#include "lwip/sockets.h"
#include "lwip/sys.h"
#include "lwip/netdb.h"
#include "lwip/dns.h"
#include "sdkconfig.h"

#include "cJSON.h"
#include "httpTasks/httpTasks.h"

//Json object aswell as the initial JSON string
static cJSON *gWledJson = NULL;
static cJSON *nWledJson = NULL;


char json[1024]; // Buffer for the JSON string
static const char *default_json =
  "{\"on\":true,\"bri\":40,\"transition\":7,\"ps\":-1,"
  "\"pl\":-1,\"ledmap\":0,\"AudioReactive\":{\"on\":false},"
  "\"nl\":{\"on\":false,\"dur\":60,\"mode\":1,\"tbri\":0,\"rem\":-1},"
  "\"udpn\":{\"send\":false,\"recv\":true,\"sgrp\":1,\"rgrp\":1},"
  "\"lor\":0,\"mainseg\":0,"
  "\"seg\":[{\"id\":0,\"start\":0,\"stop\":3,\"len\":3,\"grp\":1,"
  "\"spc\":0,\"of\":0,\"on\":true,\"frz\":false,\"bri\":255,"
  "\"cct\":127,\"set\":0,\"col\":[[255,160,0],[0,0,0],[0,0,0]],"
  "\"fx\":0,\"sx\":128,\"ix\":128,\"pal\":0,\"c1\":128,\"c2\":128,"
  "\"c3\":16,\"sel\":true,\"rev\":false,\"mi\":false,\"o1\":false,"
  "\"o2\":false,\"o3\":false,\"si\":0,\"m12\":0}]}";


/*Includes for Embedded Wizard*/
#include "ewmain.h"
#include "ewrte.h"
#include "ew_bsp_system.h"


static const char *TAG = "WLED_control";

/* Create a queue to send requests from the frontend to the task, aswell as 2 variables that serve as parameters*/

static QueueHandle_t ew_queue;
char _key[20];
char _value[20];
char _dataType[20];


/***********************************************************************
Initialize the JSON object at startup with a HTTP request or a default JSON
object.
************************************************************************/
void JsonInit()
{
    int h;
    h = http_GET((char *)json, sizeof(json));

    if (h != 200) {
        ESP_LOGE(TAG, "Failed to get JSON object. Using default JSON.");
        gWledJson = cJSON_Parse(default_json);
        return;
    }

    // Find the start of the JSON object (after the headers)
    char *json_start = strstr(json, "\r\n\r\n");
    if (json_start != NULL) {
        json_start += 4; // Skip the \r\n\r\n separator
    } else {
        json_start = strstr(json, "{"); // Fallback: look for first {
    }

    if (json_start == NULL) {
        ESP_LOGE(TAG, "Could not find JSON data in response. Using default.");
        gWledJson = cJSON_Parse(default_json);
        return;
    }

    gWledJson = cJSON_Parse(json_start);
    if (gWledJson == NULL) {
        ESP_LOGE(TAG, "Failed to parse JSON. Using default.");
        gWledJson = cJSON_Parse(default_json);
        return;
    }

    ESP_LOGI(TAG, "Set light state to: %s", json_start);
}

/***********************************************************************
This function is called by the frontend to send a request into the queue
************************************************************************/
void LedSet(XString key, XString value, XString dataType)
{
    bool trigger = true;
    
    EwStringToUtf8(key, (unsigned char *) _key, sizeof(_key)); // Convert XString to char array
    EwStringToUtf8(value, (unsigned char *) _value, sizeof(_value)); // Convert XString to char array
    EwStringToUtf8(dataType, (unsigned char *) _dataType, sizeof(_dataType)); // Convert XString to char array
    
    //ESP_LOGI(TAG, "LedSet called! Key: %s, Value: %s", _key, _value);

    xQueueSend(ew_queue, &trigger, portMAX_DELAY);
}

/***********************************************************************
Modify the JSON status object with the given key and value. The function
will search for the key in the JSON object and modify its value.
************************************************************************/
static int _LedModify(char *key, char *value, char *dataType)
{
    if (strcmp(dataType, "bool") == 0) {
        bool b = (strcmp(value, "true") == 0);
        cJSON_ReplaceItemInObject(gWledJson,
                                  key,
                                  cJSON_CreateBool(b));
        return 0;
    }
    else if (strcmp(dataType, "int") == 0) {
        int v = atoi(value);
        cJSON_ReplaceItemInObject(gWledJson,
                                  key,
                                  cJSON_CreateNumber(v));
        return 0;
    }
    else {
        return -1; // error: unknown Key
    }
}

/************************************************************ 
    This is the task that handels the queue from the frontend.
    It will run in the FreeRTOS event loop.
************************************************************/
static void _wled_send_task(void *pvParameters)
{
    bool trigger;

    while(1){
        /* Start if there is sth in the queue*/
        if(xQueueReceive(ew_queue, &trigger, portMAX_DELAY)){
            int r = _LedModify(_key, _value, _dataType);
            if (r == 0) {
                ESP_LOGI(TAG, "Sucessfully modified the local JSON object.");
            } else {
                ESP_LOGE(TAG, "Failed to modify the local JSON object.");
                continue;
            }

            r = http_POST(cJSON_PrintUnformatted(gWledJson)); // Send the HTTP request to the WLED device
            if (r == 0) {
                ESP_LOGI(TAG, "HTTP request sent successfully.");
            } else {
                ESP_LOGE(TAG, "Failed to send HTTP request. Response code: %d", r);
                continue;
            }
        }
    }
}

static void _wled_getStatus_task(void *pvParameters)
{
    char incoming_json[1024];

    // ***Send the HTTP request to the WLED device***
    while(1){
        int r = http_GET(incoming_json, sizeof(incoming_json));
        if (r != 200) {
            ESP_LOGE(TAG, "Failed to get JSON object.");
            vTaskDelay(3000 / portTICK_PERIOD_MS);
            continue;
        }

        // ***Format the response***
        char *json_start = strstr(incoming_json, "\r\n\r\n");  // Use incoming_json instead of json
        if (json_start != NULL) {
            json_start += 4; // Skip the \r\n\r\n separator
        } else {
            json_start = strstr(incoming_json, "{"); // Fallback: look for first {
        }

        if (json_start == NULL) {
            ESP_LOGE(TAG, "Could not find JSON data in response.");
            vTaskDelay(3000 / portTICK_PERIOD_MS);
            continue;
        }
        
        nWledJson = cJSON_Parse(json_start);
        if (nWledJson == NULL) {
            ESP_LOGE(TAG, "Failed to parse incoming JSON.");
            vTaskDelay(3000 / portTICK_PERIOD_MS);
            continue;
        }
        
        //***Compare "bri" parameter***
        cJSON *bri_gWled = cJSON_GetObjectItem(gWledJson, "bri");
        cJSON *bri_nWled = cJSON_GetObjectItem(nWledJson, "bri");
        if (bri_gWled && bri_nWled && bri_gWled->valueint != bri_nWled->valueint) {
            ESP_LOGI(TAG, "Brightness changed: gWledJson=%d, nWledJson=%d", bri_gWled->valueint, bri_nWled->valueint);
            // Update the local JSON object with the new brightness value
            cJSON_ReplaceItemInObject(gWledJson, "bri", cJSON_CreateNumber(bri_nWled->valueint));
            //EWUpdateSlider(cJSON_CreateNumber(bri_nWled->valueint));
        }

        // ***Compare "on" parameter***
        cJSON *on_gWled = cJSON_GetObjectItem(gWledJson, "on");
        cJSON *on_nWled = cJSON_GetObjectItem(nWledJson, "on");
        if (on_gWled && on_nWled && cJSON_IsTrue(on_gWled) != cJSON_IsTrue(on_nWled)) {
            ESP_LOGI(TAG, "On state changed: gWledJson=%s, nWledJson=%s", 
                    cJSON_IsTrue(on_gWled) ? "true" : "false", 
                    cJSON_IsTrue(on_nWled) ? "true" : "false");
            
            // Update the local JSON object with the new on/off state
            cJSON_ReplaceItemInObject(gWledJson, "on", cJSON_CreateBool(cJSON_IsTrue(on_nWled)));
            
        }

        // Free the parsed JSON object
        cJSON_Delete(nWledJson);
        
        vTaskDelay(3000 / portTICK_PERIOD_MS);
    }
}

/**************************************************************************
  The GUI_Task() function implements the main loop of the Embedded Wizard
**************************************************************************/
void _GUI_task(void *pvParameters)
{
  unsigned int stack;

  /* determine the stack area and provide it to the Runtime Environmnet */
  EwSetStackAddressArea( &stack, (void*)((unsigned int)&stack - EW_GUI_THREAD_STACK_SIZE ));

  /* initialize system */
  EwBspSystemInit();

  /* initialize Embedded Wizard application */
  if ( EwInit() == 0 )
    return;

  EwPrintSystemInfo();

  /* process the Embedded Wizard main loop */
  while( EwProcess())
    ;

  /* de-initialize Embedded Wizard application */
  EwDone();

  /* terminate the system */
  EwBspSystemDone();
}



/**************************************************************************
  The main function is the entry point of the application. It initializes
  the system and starts the GUI task, as well as the WLED HTTP task.
**************************************************************************/
void app_main(void)
{
    /* Set up the flash-storage for the Wi-Fi module*/
    ESP_ERROR_CHECK(nvs_flash_init() );
    ESP_ERROR_CHECK(esp_netif_init());
    /* Create a event loop where our code will be handled */
    ESP_ERROR_CHECK(esp_event_loop_create_default());
        /* This helper function configures Wi-Fi or Ethernet, as selected in menuconfig.
     * Read "Establishing Wi-Fi or Ethernet Connection" section in
     * examples/protocols/README.md for more information about this function.
     */
    ESP_ERROR_CHECK(example_connect());

    JsonInit(); // Initialize the JSON object

    /* Create a queue to send requests from the frontend to the task*/
    ew_queue = xQueueCreate(1, sizeof(bool));

    
    /* Start the GUI task */
    xTaskCreate(&_GUI_task, "GUI_Task", EW_GUI_THREAD_STACK_SIZE, NULL, 4, NULL );

    /* Put the wled task into the event-loop*/
    xTaskCreate(&_wled_send_task, "wled_send_task", 4096, NULL, 5, NULL);
    xTaskCreate(&_wled_getStatus_task, "wled_update_frontedn", 4096, NULL, 5, NULL);
}
