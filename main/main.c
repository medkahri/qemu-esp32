#include <stdio.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
void app_main(void)
{

    int count =0 ;
    while (1)
    {
        ESP_LOGI("QEMU","running qemu by mohamed taher %d",count++);
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
    

}
