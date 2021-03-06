# ✨ GPIO
ESP-IDF has a tidy way to setup and control the GPIO pins.
Include the GPIO driver library:
```sh
#include "driver/gpio.h"
```
To declare the pin that will be used:
```sh
gpio_pad_select_gpio(PIN);
```
To set whether the pin is an input or an output:
```sh
gpio_set_direction(PIN, GPIO_MODE_OUTPUT);
 ```
And lastly, to control the pin:
```sh
gpio_set_level(PIN, 1);
```
## 📝 Dig deeper
```sh
https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/peripherals/gpio.html
```
