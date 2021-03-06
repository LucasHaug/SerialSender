/**
 * @file target_serial_sender_g0_v1.h
 *
 * @brief Configurations for target_serial_sender_g0_v1.
 *
 * @author Lucas Haug <lucas.haug@thunderatz.org>
 *
 * @date 09/2019
 */

#ifndef __SERIAL_SENDER_G0_V1_H__
#define __SERIAL_SENDER_G0_V1_H__

/*****************************************
 * Public Constants
 *****************************************/

/** USART */
#define TARGET_USART_HANDLER (huart2)
#define TARGET_USART_INIT MX_USART2_UART_Init

/** LEDS */
#define TARGET_LED_PORT GPIOA
#define TARGET_LED_PIN GPIO_PIN_5

#endif // __SERIAL_SENDER_G0_V1_H__
