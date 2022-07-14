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

*Note that the ESP-IDF build system does not support spaces in the paths to either ESP-IDF or to projects!*

After creating the depository for your new project, use "cd <path>" to navigate into it in the ESP-IDF prompt.
