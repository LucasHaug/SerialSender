/**
 * @file mcu.c
 *
 * @brief MCU related
 */

#include <stdint.h>
#include <string.h>

#include "mcu.h"

#include "gpio.h"
#include "main.h"
#include "stm32f3xx_hal.h"
#include "usart.h"

/*****************************************
 * Public Function Body Definitions
 *****************************************/

void mcu_init(void) {
    HAL_Init();

    SystemClock_Config();

    MX_GPIO_Init();

    MX_USART1_UART_Init();
}

void mcu_sleep(uint32_t ms) {
    HAL_Delay(ms);
}

void led_toggle(void) {
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
}

void mcu_printf(char* data) {
    HAL_UART_Transmit(&huart1, (uint8_t*) data, strlen(data), 100);
}
