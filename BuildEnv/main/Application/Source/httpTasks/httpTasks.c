#include "httpTasks.h"

static char *TAG = "HTTP";

int http_POST(char *json_string)
{
    struct sockaddr_in dest_addr;
    int s;
    int result = -1; // Default to error
    char request[2048];

    // Create socket
    s = socket(AF_INET, SOCK_STREAM, 0);
    if(s < 0) {
        ESP_LOGE(TAG, "... Failed to allocate socket.");
        return -1;
    }

    // Initialize the server address structure
    dest_addr.sin_addr.s_addr = inet_addr(WEB_SERVER);
    dest_addr.sin_family = AF_INET;
    dest_addr.sin_port = htons(atoi(WEB_PORT));

    // Connect to the server
    if(connect(s, (struct sockaddr *)&dest_addr, sizeof(dest_addr)) != 0) {
        ESP_LOGE(TAG, "... socket connect failed errno=%d", errno);
        goto cleanup;
    }

    // Create the complete HTTP request
    snprintf(request, sizeof(request),
        "POST " WEB_PATH " HTTP/1.0\r\n"
        "Host: " WEB_SERVER ":" WEB_PORT "\r\n"
        "User-Agent: esp-idf/1.0 esp32\r\n"
        "Content-Type: application/json\r\n"
        "Content-Length: %d\r\n"
        "\r\n"
        "%s",
        strlen(json_string), json_string);

    // Send the request
    if (write(s, request, strlen(request)) < 0) {
        ESP_LOGE(TAG, "... socket send failed");
        goto cleanup;
    }

    ESP_LOGI(TAG, "... socket send success");
    result = 0; // Success!

cleanup:
    if (s >= 0) {
        close(s);
    }
    return result;
}


int http_GET(char *buffer, int size)
{
    struct sockaddr_in dest_addr;
    int s = -1; // Initialize to invalid
    int r;
    char responsecode[4];
    int ret_responsecode = 0; // Default error code

    /* Create a suitable HTTP-GET request */
    static char *REQUEST = "GET " WEB_PATH " HTTP/1.0\r\n"
        "Host: "WEB_SERVER":"WEB_PORT"\r\n"
        "User-Agent: esp-idf/1.0 esp32\r\n"
        "\r\n";

    // Create socket
    s = socket(AF_INET, SOCK_STREAM, 0);
    if(s < 0) {
        ESP_LOGE(TAG, "... Failed to allocate socket.");
        goto cleanup;
    }

    // Initialize address structure
    dest_addr.sin_addr.s_addr = inet_addr(WEB_SERVER);
    dest_addr.sin_family = AF_INET;
    dest_addr.sin_port = htons(atoi(WEB_PORT));

    // Connect to the server
    if(connect(s, (struct sockaddr *)&dest_addr, sizeof(dest_addr)) != 0) {
        ESP_LOGE(TAG, "... socket connect failed errno=%d", errno);
        goto cleanup;
    }

    // Send request
    if (write(s, REQUEST, strlen(REQUEST)) < 0) {
        ESP_LOGE(TAG, "... socket send failed");
        goto cleanup;
    }

    // Set socket timeout
    struct timeval receiving_timeout;
    receiving_timeout.tv_sec = 5;
    receiving_timeout.tv_usec = 0;
    if (setsockopt(s, SOL_SOCKET, SO_RCVTIMEO, &receiving_timeout,
            sizeof(receiving_timeout)) < 0) {
        ESP_LOGE(TAG, "... failed to set socket receiving timeout");
        goto cleanup;
    }

    // Read response
    bzero(buffer, size);
    r = read(s, buffer, size-1);
    if (r <= 0) {
        ESP_LOGE(TAG, "... error reading response");
        goto cleanup;
    }

    // Parse response code
    sscanf(buffer, "HTTP/%*s %3s", responsecode);
    ret_responsecode = atoi(responsecode);
    ESP_LOGI(TAG, "Response code: %d", ret_responsecode);

cleanup:
    if (s >= 0) {
        close(s);
        ESP_LOGI(TAG, "... socket closed");
    }
    return ret_responsecode;
}