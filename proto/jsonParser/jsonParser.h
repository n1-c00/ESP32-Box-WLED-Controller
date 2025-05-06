#ifndef JSONPARSER_H
#define JSONPARSER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief  Parses the initial WLED JSON into an internal cJSON object.
 *         Call once (e.g. in app_main) before any modifications.
 */
void JsonInit(void);

/**
 * @brief  Modify a single field in the parsed WLED JSON.
 *
 * @param  key     The JSON field name to modify ("on", "bri", …).
 * @param  value   The new value as a string ("true"/"false" for on,
 *                "0"–"255" for bri, …).
 * @return uint8_t 0 on success, 1 on unknown key.
 */
uint8_t LedModify(const char* key, const char* value);

#ifdef __cplusplus
}
#endif

#endif // JSONPARSER_H
