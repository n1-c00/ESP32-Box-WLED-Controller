### LedSet  
**Parameters:** `key` (string), `setpoint` (string)  
**Returns:** None  
**Description:**  
- Makes use of the WLED JSON-API to control the WLED host  
- `key = "on"` -> turn LED on/off (`value = true/false`)  
- `key = "bri"` -> set brightness (`value = 0–255`)  
- For more key types, see the [API documentation](https://kno.wled.ge/interfaces/json-api/)  

**Examples:**  
`LedSet("on", "true")` -> Turns on the LED  

`LedSet("bri", "127")` -> Sets the LEDs to 50% brightness  

---

### GetSystemInfo
**Parameters:** `infoType` (string)  
**Returns:** `response` (string)  
**Description:**  
- Retrieves basic system information
- `infoType = "wifiAddress"` -> returns IP address (`response = IP-address`)
- `infoType = "wifiSsid"` -> returns Wifi-SSID (`response = Wifi-SSID`)
- `infoType = "time"` -> returns current time (`response = dd,mm,yy,h,min`)

**Examples:**  
`GetBasicInfo("wifiAddress")` -> Returns the IP address  
`GetBasicInfo("time")` -> Returns the current timestamp in defined format