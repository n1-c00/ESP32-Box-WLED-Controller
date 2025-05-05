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

//Json object aswell as the initial JSON string
//ToDo: Make a request to the WLED device to get the current JSON object
static cJSON *gWledJson = NULL;

static const char *json =
  "{\"on\":false,\"bri\":40,\"transition\":7,\"ps\":-1,"
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
#include "main.h"

static const char *TAG = "WLED_control";

/* Web path to the WLED host */
#define WEB_SERVER "192.168.219.164"
#define WEB_PORT "80"
#define WEB_PATH "/json/state"

/* Create a queue to send requests from the frontend to the task, aswell as 2 variables that serve as parameters*/

static QueueHandle_t ew_queue;
char _key[20];
char _value[20];


/**************************************************************************
  The GUI_Task() function implements the main loop of the Embedded Wizard
**************************************************************************/
void _GUI_Task(void *pvParameters)
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
  This function sends the HTTP POST request to the WLED device with the
  givel local JSON object. If the response code is 0, the request was
  successful.
**************************************************************************/
static int _http_POST(char *json_string)
{
    struct sockaddr_in dest_addr;
    int s;
    char request[2048];

    // Create the complete HTTP request with headers and body
    snprintf(request, sizeof(request),
        "POST " WEB_PATH " HTTP/1.0\r\n"
        "Host: " WEB_SERVER ":" WEB_PORT "\r\n"
        "User-Agent: esp-idf/1.0 esp32\r\n"
        "Content-Type: application/json\r\n"
        "Content-Length: %d\r\n"
        "\r\n"
        "%s",
        strlen(json_string), json_string);
    //ESP_LOGI(TAG, "... request: %s", request);
    
    // Initialize the server address structure
    dest_addr.sin_addr.s_addr = inet_addr(WEB_SERVER);
    dest_addr.sin_family = AF_INET;
    dest_addr.sin_port = htons(atoi(WEB_PORT));

    // Create socket
    s = socket(AF_INET, SOCK_STREAM, 0);
    if(s < 0) {
        ESP_LOGE(TAG, "... Failed to allocate socket.");
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
    ESP_LOGI(TAG, "... allocated socket");
    
    // Connect to the server
    if(connect(s, (struct sockaddr *)&dest_addr, sizeof(dest_addr)) != 0) {
       ESP_LOGE(TAG, "... socket connect failed errno=%d", errno);
        close(s);
        return -1;
    }

        ESP_LOGI(TAG, "... connected");

    if (write(s, request, strlen(request)) < 0) { // Changed REQUEST to request
        ESP_LOGE(TAG, "... socket send failed");
        close(s);
        return -1;
    }
    ESP_LOGI(TAG, "... socket send success");
    return 0; // Return 0 to indicate success
}


/***********************************************************************
This function is called by the frontend to send a request into the queue
************************************************************************/
void LedSet(XString key, XString value)
{
    bool trigger = true;
    
    EwStringToUtf8(key, (unsigned char *) _key, sizeof(_key)); // Convert XString to char array
    EwStringToUtf8(value, (unsigned char *) _value, sizeof(_value)); // Convert XString to char array
    
    //ESP_LOGI(TAG, "LedSet called! Key: %s, Value: %s", _key, _value);

    xQueueSend(ew_queue, &trigger, portMAX_DELAY);
}

/***********************************************************************
Modify the JSON status object with the given key and value. The function
will search for the key in the JSON object and modify its value.
************************************************************************/
static int _LedModify(char *key, char *value)
{
    if (strcmp(key, "on") == 0) {
        bool b = (strcmp(value, "true") == 0);
        cJSON_ReplaceItemInObject(gWledJson,
                                  key,
                                  cJSON_CreateBool(b));
        return 0;
    }
    else if (strcmp(key, "bri") == 0) {
        // Helligkeit (0–255)
        int v = atoi(value);
        if (v < 0) v = 0;
        if (v > 255) v = 255;
        cJSON_ReplaceItemInObject(gWledJson,
                                  key,
                                  cJSON_CreateNumber(v));
        return 0;
    }
    else {
        return -1; // Fehler: unbekannter Key
    }
}

/************************************************************ 
    This is the task that handels the queue from the frontend.
    It will run in the FreeRTOS event loop.
************************************************************/
static void _wled_api_task(void *pvParameters)
{
    bool trigger;

    while(1){
        /* Start if there is sth in the queue*/
        if(xQueueReceive(ew_queue, &trigger, portMAX_DELAY)){
            int r = _LedModify(_key, _value);
            if (r == 0) {
                ESP_LOGI(TAG, "Sucessfully modified the local JSON object.");
            } else {
                ESP_LOGE(TAG, "Failed to modify the local JSON object.");
                continue;
            }

            r = _http_POST(cJSON_PrintUnformatted(gWledJson)); // Send the HTTP request to the WLED device
            if (r == 0) {
                ESP_LOGI(TAG, "HTTP request sent successfully.");
            } else {
                ESP_LOGE(TAG, "Failed to send HTTP request. Response code: %d", r);
                continue;
            }
        //ToDo: Add a callback function to the frontend to update the UI
        }
    }
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

    /* Initialize the JSON object with the default values */
    gWledJson = cJSON_Parse(json);

    /* Create a queue to send requests from the frontend to the task*/
    ew_queue = xQueueCreate(1, sizeof(bool));

    
    /* Start the GUI task */
    xTaskCreate(&_GUI_Task, "GUI_Task", EW_GUI_THREAD_STACK_SIZE, NULL, 4, NULL );

    /* This helper function configures Wi-Fi or Ethernet, as selected in menuconfig.
     * Read "Establishing Wi-Fi or Ethernet Connection" section in
     * examples/protocols/README.md for more information about this function.
     */
    ESP_ERROR_CHECK(example_connect());

    /* Put the wled task into the event-loop*/
    xTaskCreate(&_wled_api_task, "wled_http_GET", 4096, NULL, 5, NULL);
}
