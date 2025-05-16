#include "httpTasks.h"

static const char *TAG = "HTTP";

int http_POST(char *json_string)
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
        return -1;
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


int http_GET(char *buffer, int size)
{
    struct sockaddr_in dest_addr;
    int s, r;
    char responsecode[4];
    int ret_responsecode;
    
    // Initialize the server address structure
    dest_addr.sin_addr.s_addr = inet_addr(WEB_SERVER);
    dest_addr.sin_family = AF_INET;
    dest_addr.sin_port = htons(atoi(WEB_PORT));
    
    /* Create a suitable HTTP-GET request out of from the URL*/
    static char *REQUEST = "GET " WEB_PATH " HTTP/1.0\r\n"
        "Host: "WEB_SERVER":"WEB_PORT"\r\n"
        "User-Agent: esp-idf/1.0 esp32\r\n"
        "\r\n";

    ESP_LOGI(TAG, "... request: %s", REQUEST);

    // Create socket
    s = socket(AF_INET, SOCK_STREAM, 0);
    if(s < 0) {
        ESP_LOGE(TAG, "... Failed to allocate socket.");
        return 0;
    }
    ESP_LOGI(TAG, "... allocated socket");

    // Connect to the server
    if(connect(s, (struct sockaddr *)&dest_addr, sizeof(dest_addr)) != 0) {
        ESP_LOGE(TAG, "... socket connect failed errno=%d", errno);
        close(s);
        return 0;
    }

    ESP_LOGI(TAG, "... connected");

    if (write(s, REQUEST, strlen(REQUEST)) < 0) {
        ESP_LOGE(TAG, "... socket send failed");
        return 0;
    }
    ESP_LOGI(TAG, "... socket send success");

    struct timeval receiving_timeout;
    receiving_timeout.tv_sec = 5;
    receiving_timeout.tv_usec = 0;
    if (setsockopt(s, SOL_SOCKET, SO_RCVTIMEO, &receiving_timeout,
            sizeof(receiving_timeout)) < 0) {
        ESP_LOGE(TAG, "... failed to set socket receiving timeout");
        close(s);
        return 0;
    }
    ESP_LOGI(TAG, "... set socket receiving timeout success");

    /* Fetch the first line of the HTTP response */
    bzero(buffer, size);              //clear the buffer
    r = read(s, buffer, size-1);
    
    /*extract the response code out of the first line of response*/
    sscanf(buffer, "HTTP/%*s %3s", responsecode);
    ret_responsecode = atoi(responsecode);
    ESP_LOGI(TAG, "Response code: %d", ret_responsecode);

    //close the socket and return the response
    ESP_LOGI(TAG, "... done reading from socket. Last read return=%d errno=%d.", r, errno);
    close(s);
    return ret_responsecode;
}