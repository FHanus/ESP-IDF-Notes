# ✨ Random Number
ESP-IDF has its own random number generator function.

Include the ESP_LOG library:
```sh
#include "esp_system.h"
```
A library to include math functions can also be included:
```sh
#include "math.h"
```
Generate a random number:

```sh
 esp_random();
```
This number can then be edited to include only positive numbers (by using the "abs()" function) or to only reach a certain limit (by using the modulus operaotr).
