/**
 * @file serial.c
 *
 * @brief Send data through serial comm using printf function.
 *
 * @author Lucas Haug <lucas.haug@thunderatz.org>
 *
 * @date 01/2021
 */

#include "serial.h"

#include "usart.h"

#include <string.h>
#include <errno.h>
#include <sys/unistd.h> // STDOUT_FILENO, STDERR_FILENO

/*****************************************
 * Private Constant Definitions
 *****************************************/

#define UART_TIMEOUT_MS 1000U

/*****************************************
 * Public Function Body Definitions
 *****************************************/

void serial_init(void) {
    TARGET_USART_INIT();
}

int _write(int file, char* data, int len) {
    if ((file != STDOUT_FILENO) && (file != STDERR_FILENO)) {
        errno = EBADF;
        return -1;
    }

    HAL_StatusTypeDef status =
        HAL_UART_Transmit(&TARGET_USART_HANDLER, (uint8_t*) data, len, UART_TIMEOUT_MS);

    // return number of bytes written
    return (status == HAL_OK ? len : 0);
}
