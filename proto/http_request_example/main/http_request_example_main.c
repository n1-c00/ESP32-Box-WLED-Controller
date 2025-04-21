/* HTTP GET Example using plain POSIX sockets

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
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

/* Constants that aren't configurable in menuconfig */
#define WEB_SERVER "192.168.150.150" // IP of the WLED device
#define WEB_PORT "80"
#define WEB_PATH "/win&T=2" // Path to toggle the light on/off

static const char *TAG = "WLED_control";

/* Create a suitable HTTP-GET request out of from the URL*/
static const char *REQUEST = "GET " WEB_PATH " HTTP/1.0\r\n"
    "Host: "WEB_SERVER":"WEB_PORT"\r\n"
    "User-Agent: esp-idf/1.0 esp32\r\n"
    "\r\n";


static QueueHandle_t ew_queue;


static int toggleLight(void *pvParameters)
{
    const struct addrinfo hints = {
        .ai_family = AF_INET,
        .ai_socktype = SOCK_STREAM,
    };
    struct addrinfo *res;
    struct in_addr *addr;
    int s, size;
    char recv_buf[64];
    char responsecode[4];
    int ret_responsecode;


    /* Code to perform a DNS lookup (NOT NEEDED)*/
    int err = getaddrinfo(WEB_SERVER, WEB_PORT, &hints, &res);

    if(err != 0 || res == NULL) {
        ESP_LOGE(TAG, "DNS lookup failed err=%d res=%p", err, res);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }

    /* Code to print the resolved IP.
    Note: inet_ntoa is non-reentrant, look at ipaddr_ntoa_r for "real" code */
    addr = &((struct sockaddr_in *)res->ai_addr)->sin_addr;
    ESP_LOGI(TAG, "DNS lookup succeeded. IP=%s", inet_ntoa(*addr));


    /* Code to create socket and connect to the server */
    s = socket(res->ai_family, res->ai_socktype, 0);
    if(s < 0) {
        ESP_LOGE(TAG, "... Failed to allocate socket.");
        freeaddrinfo(res);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
    ESP_LOGI(TAG, "... allocated socket");

        if(connect(s, res->ai_addr, res->ai_addrlen) != 0) {
        ESP_LOGE(TAG, "... socket connect failed errno=%d", errno);
        close(s);
        freeaddrinfo(res);
        vTaskDelay(4000 / portTICK_PERIOD_MS);
    }

    ESP_LOGI(TAG, "... connected");
    freeaddrinfo(res);

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
    // for(int countdown = 10; countdown >= 0; countdown--) {
    //     ESP_LOGI(TAG, "%d... ", countdown);
    //     vTaskDelay(1000 / portTICK_PERIOD_MS);
    // }
    // ESP_LOGI(TAG, "Starting again!");

    return ret_responsecode;
}

/* This function is called by the frontend to send a request into the queue*/
static void ew_request_task(void *pvParameters)
{
    bool trigger = true;
    xQueueSend(ew_queue, &trigger, portMAX_DELAY);
}

/* 
    This is the task that handels the queue from the frontend.
    It will run in the FreeRTOS event loop.
*/
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

void app_main(void)
{
    /* Set up the flash-storage for the Wi-Fi module*/
    ESP_ERROR_CHECK( nvs_flash_init() );
    ESP_ERROR_CHECK(esp_netif_init());
    /* Create a event loop where our code will be handled */
    ESP_ERROR_CHECK(esp_event_loop_create_default());

    /* This helper function configures Wi-Fi or Ethernet, as selected in menuconfig.
     * Read "Establishing Wi-Fi or Ethernet Connection" section in
     * examples/protocols/README.md for more information about this function.
     */
    ESP_ERROR_CHECK(example_connect());

    /* Create a queue to send requests from the frontend to the task*/
    ew_queue = xQueueCreate(1, sizeof(bool));

    /* Put the task into the event-loop*/
    xTaskCreate(&wled_http_task, "wled_http_GET", 4096, NULL, 5, NULL);
}
