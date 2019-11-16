/**
 * @file serial.c
 *
 * @brief Send data through serial comm.
 *
 * @author Lucas Haug <lucas.haug@thunderatz.org>
 *
 * @date 11/2019
 */

#include "serial.h"

#include "usart.h"

/*****************************************
 * Public Function Body Definitions
 *****************************************/

void serial_init(void) {
    TARGET_USART_INIT();
}

void serial_printf(char* data) {
    HAL_UART_Transmit(&TARGET_USART_HANDLER, (uint8_t*) data, strlen(data), 100);
}
