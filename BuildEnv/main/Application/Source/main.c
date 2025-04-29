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


/*Includes for Embedded Wizard*/
#include "ewmain.h"
#include "ewrte.h"
#include "ew_bsp_system.h"

static const char *TAG = "WLED_control";

/* Constants that aren't configurable in menuconfig */
#define WEB_SERVER "192.168.150.164"  // Remove http:// and trailing slash
#define WEB_PORT "80"
#define WEB_PATH "/win&T=2"

/* Create a suitable HTTP-GET request out of from the URL*/
static const char *REQUEST = "GET " WEB_PATH " HTTP/1.0\r\n"
    "Host: "WEB_SERVER":"WEB_PORT"\r\n"
    "User-Agent: esp-idf/1.0 esp32\r\n"
    "\r\n";

/* Create a queue to send requests from the frontend to the task*/
static QueueHandle_t ew_queue;


/**************************************************************************
  The GUI_Task() function implements the main loop of the Embedded Wizard
**************************************************************************/
void GUI_Task(void *pvParameters)
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
  With this function the esp send a HTTP-GET request to the WLED device to toggle the light.
  It will return the response code of the request.
**************************************************************************/
static int toggleLight(void *pvParameters)
{
    struct sockaddr_in dest_addr;
    int s, size;
    char recv_buf[64];
    char responsecode[4];
    int ret_responsecode;
    
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
        vTaskDelay(4000 / portTICK_PERIOD_MS);
    }

        ESP_LOGI(TAG, "... connected");

    if (write(s, REQUEST, strlen(REQUEST)) < 0) {
        ESP_LOGE(TAG, "... socket send failed");
        close(s);
        vTaskDelay(4000 / portTICK_PERIOD_MS);
    }
    ESP_LOGI(TAG, "... socket send success");

    struct timeval receiving_timeout;
    receiving_timeout.tv_sec = 5;
    receiving_timeout.tv_usec = 0;
    if (setsockopt(s, SOL_SOCKET, SO_RCVTIMEO, &receiving_timeout,
            sizeof(receiving_timeout)) < 0) {
        ESP_LOGE(TAG, "... failed to set socket receiving timeout");
        close(s);
        vTaskDelay(4000 / portTICK_PERIOD_MS);
    }
    ESP_LOGI(TAG, "... set socket receiving timeout success");

    /* Fetch the first line of the HTTP response */
    bzero(recv_buf, sizeof(recv_buf));              //clear the buffer
    size = read(s, recv_buf, sizeof(recv_buf)-1);
    
    /*extract the response code out of the first line of response*/
    sscanf(recv_buf, "HTTP/%*s %3s", responsecode);
    ret_responsecode = atoi(responsecode);

    ESP_LOGI(TAG, "Response code: %d", ret_responsecode);


    ESP_LOGI(TAG, "... done reading from socket. Last read return=%d errno=%d.", size, errno);
    close(s);

    return ret_responsecode;
}

/***********************************************************************
This function is called by the frontend to send a request into the queue
************************************************************************/
static void ew_request_task(void *pvParameters)
{
    bool trigger = true;
    xQueueSend(ew_queue, &trigger, portMAX_DELAY);
}

/************************************************************ 
    This is the task that handels the queue from the frontend.
    It will run in the FreeRTOS event loop.
************************************************************/
static void wled_http_task(void *pvParameters)
{
    bool trigger;

    while(1){
        /* Start if there is sth in the queue*/
        if(xQueueReceive(ew_queue, &trigger, portMAX_DELAY)){
            int r = toggleLight(NULL);
            if(r == 200){
                ESP_LOGI(TAG, "Light toggled successfully!");
            }else{
                ESP_LOGI(TAG, "Failed to toggle light. Response code: %d", r);
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
    ESP_ERROR_CHECK( nvs_flash_init() );
    ESP_ERROR_CHECK(esp_netif_init());
    /* Create a event loop where our code will be handled */
    ESP_ERROR_CHECK(esp_event_loop_create_default());

    /* Create a queue to send requests from the frontend to the task*/
    ew_queue = xQueueCreate(1, sizeof(bool));

    
    /* Start the GUI task */
    xTaskCreate(&GUI_Task, "GUI_Task", EW_GUI_THREAD_STACK_SIZE, NULL, 4, NULL );

    /* This helper function configures Wi-Fi or Ethernet, as selected in menuconfig.
     * Read "Establishing Wi-Fi or Ethernet Connection" section in
     * examples/protocols/README.md for more information about this function.
     */
    ESP_ERROR_CHECK(example_connect());

    /* Put the wled task into the event-loop*/
    xTaskCreate(&wled_http_task, "wled_http_GET", 4096, NULL, 5, NULL);
}
