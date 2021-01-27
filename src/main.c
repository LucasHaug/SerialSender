/**
 * @file main.c
 *
 * @brief Main function
 */

#include <stdio.h>

#include "mcu.h"
#include "serial.h"

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
    serial_init();

    for (;;) {
        for (int i = 0; i <= 13; i++) {
            printf("%d\r\n", i);
            mcu_sleep(200);
        }

        for (int i = 13; i >= 0; i--) {
            printf("%d\r\n", i);
            mcu_sleep(200);
        }
    }
}
