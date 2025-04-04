# ESP32-S3-Box WLED

<br/>
  <p align="center">
    The open source solution for a stationary WLED-Controller. Be that battery powered or wall       mounted!
    <br/>
    <a href="https://github.com/htl-anichstrasse/template/issues">Report Bug</a>
    ·
    <a href="https://github.com/htl-anichstrasse/template/issues">Request Feature</a>
  </p>
</p>

## About the project
For quite some time I had WS2812-Strip driven by WLED in my room and I really love the Web-GUI. The only thing that was bothering me was that when I went to bed, I always forgot to turn the light of with my phone. This is where this project comes into play!
Espressif claims on their website that the ESP32-S3-Box-3 is "[...] the ultimate choice for prototyping new projects or building complex AIoT systems. ". So I got a colleague in on my idea, to make a stationary Controller for WLED strips in a network

## Installation

Clone the repository.
```
git clone https://github.com/n1-c00/ESP32-Box-WLED-Controller
```

(optional) change/inspect the current settings:
```
idf.py menuconfig
```

Build and flash the code via esptool.py
```
idf.py build
idf.py flash
```
<a href="https://htl-anichstrasse.tirol" target="_blank"><img src=".github/htl-anichstrasse-logo.svg" width="200px"></a>
