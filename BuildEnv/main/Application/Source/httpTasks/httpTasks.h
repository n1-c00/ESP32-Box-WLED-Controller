/*************************************************************
 * This file contains the implementations of HTTP functions
 * for the Controller: POST and GET
 * 
 * (c) 2025 by Nico Zehetner, HTBLVA Anichstrasse
 *************************************************************/
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


/* Web path to the WLED host */
#define WEB_SERVER "192.168.8.164"
#define WEB_PORT "80"
#define WEB_PATH "/json/state"

/*******************************************************************************
* FUNCTION:
*   http_POST
*
* DESCRIPTION:
*   http_POST() sends a HTTP POST request to the Web path defined in "httpTasks.h"
*   with the given JSON string as body. 
*
* ARGUMENTS:
*   json_string - The JSON string to be sent in the body of the POST request.
*
* RETURN VALUE:
*   0 if the request was successful, -1 if there was an error.   
*
*******************************************************************************/
int http_POST(char *json_string);

/*******************************************************************************
* FUNCTION:
*   http_GET
*
* DESCRIPTION:
*   http_GET() sends a HTTP GET request to the Web path defined in "httpTasks.h".
*   The function will return the response of the GET request. The function will return
*   -1 if there was an error.
*
* RETURN VALUE:
*   if the request was successful, a pointer to the array recv_buffer will be returned. Otherwise 0. 
*
*******************************************************************************/
int http_GET(char *buffer, int size);