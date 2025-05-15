# LedSet

**Parameters:** `key` (string), `setpoint` (string), `dataType` (string)
**Returns:** None  
**Description:**

- Makes use of the WLED JSON-API to control the WLED host
- `key = "on"` -> turn LED on/off (`value = true/false`)  
- `key = "bri"` -> set brightness (`value = 0–255`)
- `dataType = "bool"` -> set value conversion to bool
- `dataType = "int"` -> set value conversion to int
- For more key types, see the [API documentation](https://kno.wled.ge/interfaces/json-api/)  

**Examples:**  

- `LedSet("on", "true", "bool")` -> Turns on the LED  
- `LedSet("bri", "127", "int")` -> Sets the LEDs to 50% brightness
- `LedSet("fx", "0", "int")` -> Sets effect to Solid

# EwUpdate

**Parameters:** `key` (string), `setpoint` (string)
**Returns:** None
**Description:**

- Makes use of the WLED JSON-API to control the WLED host
- `key = "buttonName", setpoint = ""` -> turn LED on/off (`value = true/false`)  
- `key = "bri"` -> set brightness (`value = 0–255`)
- `dataType = "bool"` -> set value conversion to bool
- `dataType = "int"` -> set value conversion to int
- For more key types, see the [API documentation](https://kno.wled.ge/interfaces/json-api/)  

**Examples:**  

- `LedSet("on", "true", "bool")` -> Turns on the LED  
- `LedSet("bri", "127", "int")` -> Sets the LEDs to 50% brightness
- `LedSet("fx", "0", "int")` -> Sets effect to Solid
---

### EWUpdateSlider
**Parameters:** `value` (int)
**Returns:** None
**Description:**
- update the brightness slider on the Display. 
- This function will be called whenever the ingoing state is different from the local state of the Light.

### EWUpdateButton
**Parameters:** `value` (bool)
**Returns:** None
**Description:**
- update the toggle button on the Display. 
- This function will be called whenever the ingoing state is different from the local state of the Light.

### GetSystemInfo (on hold)
**Parameters:** `infoType` (string)  
**Returns:** `response` (string)  
**Description:**  

- Retrieves basic system information
- `infoType = "wifiAddress"` -> returns IP address (`response = IP-address`)
- `infoType = "wifiSsid"` -> returns Wifi-SSID (`response = Wifi-SSID`)
- `infoType = "time"` -> returns current time (`response = dd,mm,yy,hh,min,ss`)
- `response = "not ready"` -> tells the Gui that the WiFi connection has not been established yet

**Examples:**

- `GetSystemInfo("time")` -> Returns `"not ready"` if the device can't get the information yet (no wifi connection)
- `GetSystemInfo("time")` -> Returns the current timestamp in defined format
- `GetSystemInfo("wifiAddress")` -> Returns the IP address