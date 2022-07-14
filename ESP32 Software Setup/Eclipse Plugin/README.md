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
There is a detailed walk-through guide to Eclipse ESP Plugin that you can follow if you find any of the following instructions too simple.
```sh
https://github.com/espressif/idf-eclipse-plugin/blob/master/README.md
```
## Installing Prerequisites
Install Java from the link below, make sure you select the appropriete file that you then open and install using Software Installer.
```sh
https://www.oracle.com/technetwork/java/javase/downloads/index.html
```
Download Eclipse IDE installer from the link below.
```sh
https://www.eclipse.org/downloads/packages/release/2022-06/r/eclipse-ide-cc-developers
```
* Navigate to the Downloads folder and install Eclipse IDE
```sh
cd ~/Downloads
tar -xvf eclipse-cpp-2022-06-R-linux-gtk-x86_64.tar.gz
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





