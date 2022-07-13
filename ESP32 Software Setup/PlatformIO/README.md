# ✨ ESP32 PlatformIO Setup on Windows 11
This part of the repository describes the necessary steps of setting up PlatformIO for ESP32 programming.

## Visual Studio Code installation
Head to the Visual Studio Code website and from the "DOWNLOAD OPTIONS" select one that is the most suitable for you.
```sh
https://code.visualstudio.com/download
```
Start the setup of VS Code and complete the installation.

* Make sure you select the "Add to PATH" option in additional tasks section.

## VS Code PlatformIO installation
Open the VS Code application and head over to "Extensions" tab in the left bar.

Type "PlatformIO IDE" in the search bar and install the extension.
* Make sure you install "C/C++" extension as well.

## Setup PlatformIO for ESP32s3
Click the "PlatformIO" tab in the left bar. A new window will open with its own leftside bar.

In this new leftside bar click "Platforms" tab and search for "Espressif 32". Install this platform package.

After all these steps you should be able to head to the "Home" section in PlatformIO and after clicking "New Project".

* There should be "ESPRESSIF ESP32-S3-DEVKITC-1" option in the board selector. 
* Select any framework you are familiar with, "Arduino" should be easier for a beginner user.

# ✨ ESP32 PlatformIO Setup on Ubuntu 22.04
This part of the repository describes the necessary steps of setting up PlatformIO for ESP32 programming.

## Flatpak installation
Flatpak is currently one of the easiest way to install different applications and keep them updated.

Install Flatpak by pasting the following commands into terminal:
```sh
sudo apt install flatpak
```
Install the Software Flatpak plugin
```sh
sudo apt install gnome-software-plugin-flatpak
```
Add the Flathub repository
```sh
flatpak remote-add --if-not-exists flathub https://flathub.org/repo/flathub.flatpakrepo
```
## Visual Studio Code installation
Install VS Code using Flatpak
```sh
flatpak install flathub com.visualstudio.code
```
Restart your session

## VS Code PlatformIO installation
Open the VS Code application and head over to "Extensions" tab in the left bar.

Type "PlatformIO IDE" in the search bar and install the extension.
* Make sure you install "C/C++" extension as well.

## Setup PlatformIO for ESP32s3
Click the "PlatformIO" tab in the left bar. A new window will open with its own leftside bar.

In this new leftside bar click "Platforms" tab and search for "Espressif 32". Install this platform package.

After all these steps you should be able to head to the "Home" section in PlatformIO and after clicking "New Project".

* There should be "ESPRESSIF ESP32-S3-DEVKITC-1" option in the board selector. 
* Select any framework you are familiar with, "Arduino" should be easier for a beginner user.
