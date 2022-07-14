# ✨ ESP32 Eclipse Setup on Windows 11

## Eclipse setup and guidelines
There is a detailed walk-through guide for the Eclipse ESP Plugin that you can follow to set it up. It is unnecessary to copy all these steps into this guide past the point of the instalation steps described above.
```sh
https://github.com/espressif/idf-eclipse-plugin/blob/master/README.md
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

## Eclipse setup and guidelines
There is a detailed walk-through guide for the Eclipse ESP Plugin that you can follow to set it up. It is unnecessary to copy all these steps into this guide past the point of the instalation steps described above.
```sh
https://github.com/espressif/idf-eclipse-plugin/blob/master/README.md
```







