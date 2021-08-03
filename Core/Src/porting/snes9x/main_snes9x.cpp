#pragma GCC optimize("O0")

extern "C" {

#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "gw_linker.h"
#include "gw_lcd.h"

#include "rom_manager.h"

#include "heap.hpp"

}

#include <cstddef>


extern "C" void app_main_snes(uint8_t load_state, uint8_t start_paused)
{
    printf("Snes9x Load: %s\n", ACTIVE_FILE->name);

    cpp_heap_init();

    while (1) {
        HAL_Delay(1000);
        printf("Hello!\n");
        __NOP();
    }
}
