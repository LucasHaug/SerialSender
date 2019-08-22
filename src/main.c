/**
 * @file main.c
 *
 * @brief Main function
 */

#include <stdio.h>

#include "mcu.h"

/*****************************************
 * Private Constant Definitions
 *****************************************/

#define LED_TOGGLE_DELAY_MS 500

char send_data[256];

/*****************************************
 * Main Function
 *****************************************/

int main(void) {
    mcu_init();

    for (;;) {
        sprintf(send_data, "AAAA\r\n");
        mcu_printf(send_data);

        led_toggle();
        mcu_sleep(LED_TOGGLE_DELAY_MS);
    }
}
