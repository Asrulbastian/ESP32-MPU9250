#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "rom/ets_sys.h"
#include "nvs_flash.h"
#include "driver/gpio.h"
#include "sdkconfig.h"
#include "esp-dht11.h"

void DHT_task()
{
   setDHTPin(4);
   printf("Starting DHT measurement!\n");
   while(1)
   {
    printf("Temperature reading %d\n",getTemp());
    printf("F temperature is %d\n", getFtemp());
    printf("Humidity reading %d\n",getHumidity());
    vTaskDelay(3000 / portTICK_PERIOD_MS);
   }
}
