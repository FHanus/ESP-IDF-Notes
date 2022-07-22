/* IDF-Voice-Recorder

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#include "driver/i2s.h"
#include "esp_log.h"
#include "esp_wifi.h"
#include "nvs_flash.h"
#include "protocol_examples_common.h"

static const char *TAG="main";

/* Declare the function which starts the file server.
 * Implementation of this function is to be found in
 * file_server.c */
esp_err_t start_file_server(const char *base_path);

/* Declare the function which initializes the I2S microphone.
 * Implementation of this function is to be found in
 * spiffs_recorder.c */
esp_err_t init_microphone();

/* Declare the function which records the voice command.
 * Implementation of this function is to be found in
 * spiffs_recorder.c */
esp_err_t record_wav();

void app_main(void)
{
    ESP_LOGI(TAG, "PDM microphone recording Example start");

    // Init the PDM digital microphone
    ESP_ERROR_CHECK(init_microphone());

    ESP_LOGI(TAG, "Starting recording!");

    // Start Recording
    ESP_ERROR_CHECK(record_wav());

    // Stop I2S driver and destroy
    ESP_ERROR_CHECK(i2s_driver_uninstall(0));

    // Server Initialization
    ESP_ERROR_CHECK(nvs_flash_init());
    ESP_ERROR_CHECK(esp_netif_init());
    ESP_ERROR_CHECK(esp_event_loop_create_default());

    /* This helper function configures Wi-Fi or Ethernet, as selected in menuconfig.
     * Read "Establishing Wi-Fi or Ethernet Connection" section in
     * examples/protocols/README.md for more information about this function.
     */
    ESP_ERROR_CHECK(example_connect());

    // Start the file server
    ESP_ERROR_CHECK(start_file_server("/spiffs"));

}
