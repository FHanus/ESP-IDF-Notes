# ✨ Logging
ESP-IDF comes with an useful logging capability which can be used for standard logging or debugging purposes.
There are couple verbosity levels that can be set for different logging purposes:

 * Error (lowest)
 * Warning
 * Info
 * Debug
 * Verbose (highest)

You can change the maximum verbose level that will be showing up (the default setting is "Info"). This means that with no additional settings only "Info" level logs will show up, "Debug" and "Verbose" will remain hidden.

Change the maximum verbose level from within: menuconfig > Component config > Log output
```sh
idf.py menuconfig
```
To overwrite the default verbosity level from your program use:
```sh
// change the max verbose level to "Verbose" (the maximum possible one)
#define LOG_LOCAL_LEVEL ESP_LOG_VERBOSE
```
The specific code for changing the verbose level for specific tags from within your program is (note that this is still limited by the max level set in the menuconfig):
```sh
// "LOG" is the corresponding tag, "ESP_LOG_INFO" corresponds to the mentioned "Info" verbose level.
esp_log_level_set("LOG",ESP_LOG_INFO) 
```
To display the five log outputs use:
```sh
ESP_LOGE("LOGGING", "This is an error");
ESP_LOGW("LOGGING", "This is a warning");
ESP_LOGI("LOGGING", "This is a info");
ESP_LOGD("LOGGING", "This is a debug");
ESP_LOGV("LOGGING", "This is verbose");
```

## 📝 Dig deeper
```sh
https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/system/log.html
```
