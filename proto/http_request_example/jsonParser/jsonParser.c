#include "cJSON.h"
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

static cJSON *gWledJson = NULL;

static const char *initialJson =
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

// Initialisierung: einmalig aufrufen, z.B. in app_main()
void JsonInit(void)
{
    if (gWledJson) {
        cJSON_Delete(gWledJson);
    }
    gWledJson = cJSON_Parse(initialJson);
}

uint8_t LedModify(const char* key, const char* value)
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
        return 1; // Fehler: unbekannter Key
    }
}

void example_usage(void)
{
    JsonInit();  // einmalig

    // wenn der Slider wechselt:
    LedModify("bri", "127");

    // wenn der Switch toggled:
    LedModify("on", "false");  // setzt on auf false

    // um das geänderte JSON wieder als String zu bekommen:
    char *newJson = cJSON_PrintUnformatted(gWledJson);

    //free(newJson); // nicht vergessen, wenn nicht mehr gebraucht
}
