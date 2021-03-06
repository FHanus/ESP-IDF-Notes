# ✨ ESP32 Arduino IDE Setup on Windows 11
This part of the repository describes the necessary steps of setting up Arduino IDE for ESP32 programming.

## Arduino IDE installation
Head to the Arduino website and from the "DOWNLOAD OPTIONS" select one that is the most suitable for you.
```sh
https://www.arduino.cc/en/software
```

* Note that the best way to download the Windows Arduino IDE application is by using the "Windows" option and ignoring the "Windows app" option that leads to Microsoft Store.

## Arduino IDE ESP32 board setup
Open the Arduino IDE application and head over to "File" tab. In the "File" settings select "preferences".

* On the bottom side of the window, there is a text field "Additional Boards Manager URLs:" and into this field paste the following link: 
```sh
https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_dev_index.json
```

Head over to the "Tools" tab in the Arduino IDE and in the middle section select "Board" > "Boards Manager...".

* In the search field, search for "esp32" and make sure the downloaded version is > 2.0.4

After downloading the boards package you should be good to go!

# ✨ ESP32 Arduino IDE Setup on Ubuntu 22.04
This part of the repository describes the necessary steps of setting up Arduino IDE for ESP32 programming.

## Arduino IDE installation
Head to the Arduino website and from the "DOWNLOAD OPTIONS" select one that is the most suitable for you. After downloading open the terminal window.
```sh
https://www.arduino.cc/en/software
```
* Navigate to your "Downloads" folder by typing:
```sh
cd ~/Downloads
```
* Unpack the Arduino installation files by typing:
```sh
tar -xvf arduino-1.8.19-linux64.tar.xz
```
* Next navigate into the Arduino installation folder. You can type just the couple of first letters of the name of the folder and then press "tab" key to fill out the rest of the folder name which includes the version you have just downloaded.
```sh
cd arduino-1.8.19
```
* Run the installation script by typing:
```sh
sudo ./install.sh
```

## Arduino IDE ESP32 board setup
Open the Arduino IDE application and head over to "File" tab. In the "File" settings select "preferences".

* On the bottom side of the window, there is a text field "Additional Boards Manager URLs:" and into this field paste the following link:
```sh
https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_dev_index.json
```

Head over to the "Tools" tab in the Arduino IDE and in the middle section select "Board" > "Boards Manager...".

* In the search field, search for "esp32" and make sure the downloaded version is > 2.0.4

After downloading the boards package you should be good to go!

