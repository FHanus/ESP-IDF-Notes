# ✨ ESP32 Eclipse Setup on Windows 11
There is a detailed walk-through guide to Eclipse ESP Plugin that you can follow if you find any of the following instructions too simple.
```sh
https://github.com/espressif/idf-eclipse-plugin/blob/master/README.md
```

## Visual Studio Code installation
Head to the Visual Studio Code website and from the "DOWNLOAD OPTIONS" select one that is the most suitable for you.

```sh
https://code.visualstudio.com/download
```

# ✨ ESP32 Eclipse Setup on Ubuntu 22.04

## Installing Prerequisites
Install Java using the following commands in the terminal.
```sh
$ sudo apt update
$ sudo apt install default-jre
```
Install the rest of the needed tools by typing the following command in the terminal.
```sh
sudo apt-get install git wget flex bison gperf python3 python3-venv cmake ninja-build ccache libffi-dev libssl-dev dfu-util libusb-1.0-0
```
Create a folder for your ESP installation and clone the Espressif ESP-IDF repository.
```sh
mkdir -p ~/esp
cd ~/esp
git clone --recursive https://github.com/espressif/esp-idf.git
```
Download Eclipse IDE installer from the link below.
```sh
https://www.eclipse.org/downloads/
```
* Navigate to the Downloads folder, extract the file and install Eclipse IDE by opening the "eclipse-inst" file.

There is a detailed walk-through guide for the Eclipse ESP Plugin that you can follow to set up. There is a detailed walk you through taht is unnecessary to copy after the point of the instalation steps desribed above.
```sh
https://github.com/espressif/idf-eclipse-plugin/blob/master/README.md
```







