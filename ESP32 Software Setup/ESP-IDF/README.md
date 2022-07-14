# ✨ ESP-IDF Setup on Windows 11
This part of the repository describes the necessary steps of setting up ESP-IDF for ESP32 programming and additional tips from our side as a developer working with these chips.

## ESP-IDF Prerequisite Tools
ESP-IDF requires some prerequisite tools to be installed so you can build firmware for supported chips. The prerequisite tools include Python, Git, cross-compilers, CMake and Ninja build tools.

Easiest way to install all the necessary tools is by using Espressif's ESP-IDF Tools installer:
```sh
https://dl.espressif.com/dl/esp-idf/?idf=4.4
```

* Select the green, online option for a faster instalation if you have a sufficiently good internet download speed. Otherwise go for the offline version.

The installer deploys the following components:
* Embedded Python
* Cross-compilers
* OpenOCD
* CMake and Ninja build tools
* ESP-IDF 

At the end of the installation process you can check out option Run ESP-IDF PowerShell Environment or Run ESP-IDF Command Prompt (cmd.exe). The installer will launch ESP-IDF environment in selected prompt. Do not forget to tick "Register the ESP-IDF Tools Executables as Windows Defender exclusions."

## Using the ESP-IDF
After the installation is complete, a new application will be made available using one of the two propts you have selected. It will be either a PowerShell or CMD app called ESP-IDF. This will be the tool you will use to program your ESP32 device.

Suggested app to actually write all your code in is either VS Code or much simpler tools like Sublime Text.

* Note that the ESP-IDF build system does not support spaces in the paths to either ESP-IDF or to projects!

After creating the depository for your new project, navigate into it in the ESP-IDF prompt.

```sh
cd <path>
```
You can then select the target device and build your program using:

```sh
idf.py set-target esp32s3
```

```sh
idf.py build
```

The best way to then upload (and right after upload start monitoring the output) your compiled program onto the target device is by typing:

```sh
idf.py -p PORT flash monitor
```

* Replace the "PORT" with the name of the port of the device, you can find this in the device manager.

## Tips for using the ESP-IDF
Easiest way to start a new project is navigating into the ESP-IDF folder and copying one of the examples to your project depository.
Test the provided examples for a better understanding of the code and follow the tips in this repository and the corresponding lecture notes on how to leverage the most of the ESP32.

# ✨ ESP-IDF Setup on Ubuntu 22.04
This part of the repository describes the necessary steps of setting up ESP-IDF for ESP32 programming and additional tips from our side as a developer working with these chips.

## ESP-IDF Prerequisite Tools
ESP-IDF requires some prerequisite tools to be installed so you can build firmware for supported chips.

```sh
sudo apt-get install git wget flex bison gperf python3 python3-venv cmake ninja-build ccache libffi-dev libssl-dev dfu-util libusb-1.0-0
```

## ESP-IDF Installation
Create a folder for your ESP installation and clone the Espressif ESP-IDF repository.
```sh
mkdir -p ~/esp
cd ~/esp
git clone --recursive https://github.com/espressif/esp-idf.git
```
* Note that CMake version 3.16 or newer is required for use with ESP-IDF. Run “tools/idf_tools.py install cmake” to install a suitable version if your OS versions doesn’t have one.

