# ✨ Delay
ESP-IDF utilises FreeRTOS (real-time operating system for microcontrollers), this can be used to implement a delay function. A proper and full-depth FreeRTOS capabilities will be described separately.
There are couple verbosity levels that can be set for different logging purposes:

Include FreeRTOS headers:
```sh
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
```
Implement the delay function:
```sh
vTaskDelay(1000 / portTICK_PERIOD_MS);
```

* portTICK_PERIOD_MS - the processor tick period translates to the amount of miliseconds it takes to complete one processor cycle, tick. To get the delay of one second, divide 1000ms (1s) by the amount of miliseconds it takes to complete one processor cycle. 

## 📝 Dig deeper
```sh
https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/system/log.html
```
