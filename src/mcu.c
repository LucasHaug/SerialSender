/**
 * @file mcu.c
 *
 * @brief MCU related
 */

#include <stdint.h>
#include <string.h>

#include "mcu.h"

#include "gpio.h"
#include "usart.h"

#ifdef STM32F3
#include "stm32f3xx_hal.h"
#else
#include "stm32g0xx_hal.h"
#endif

/*****************************************
 * Public Function Body Definitions
 *****************************************/

void mcu_init(void) {
    HAL_Init();

    SystemClock_Config();

    MX_GPIO_Init();

    TARGET_USART_INIT();
}

void mcu_sleep(uint32_t ms) {
    HAL_Delay(ms);
}

void led_toggle(void) {
    HAL_GPIO_TogglePin(TARGET_LED_PORT, TARGET_LED_PIN);
}

void mcu_printf(char* data) {
    HAL_UART_Transmit(&TARGET_USART_HANDLER, (uint8_t*) data, strlen(data), 100);
}
