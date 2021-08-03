#include <assert.h>
#include <stdint.h>
#include <stdio.h>

#include "rom_manager.h"

#include "gw_lcd.h"
#include "gw_linker.h"

void cpp_func(void)
{
    printf("Hello from c++\n");
}


extern "C" void app_main_snes(uint8_t load_state, uint8_t start_paused)
{
    printf("Snes9x Load: %s\n", ACTIVE_FILE->name);

    cpp_func();

    while (1) {
        HAL_Delay(1000);
        printf("Hello!\n");
        __NOP();
    }
}
