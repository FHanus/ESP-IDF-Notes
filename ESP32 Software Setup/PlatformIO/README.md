# ✨ ESP32 PlatformIO Setup on Windows 11
This part of the repository describes the necessary steps of setting up PlatformIO for ESP32 programming.

## Arduino IDE installation
Head to the Visual Studio Code website https://code.visualstudio.com/download and from the "DOWNLOAD OPTIONS" select one that is the most suitable for you.

## Arduino IDE ESP32 board setup
Open the Arduino IDE application and head over to "File" tab. In the "File" settings select "preferences".

* On the bottom side of the window, there is a text field "Additional Boards Manager URLs:" and into this field paste the following link: 
```sh
https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_dev_index.json
```

Head over to the "Tools" tab in the Arduino IDE and in the middle section select "Board" > "Boards Manager...".

* In the search field, search for "esp32" and make sure the downloaded version is > 2.0.4
