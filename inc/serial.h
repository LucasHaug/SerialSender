
/**
 * @file serial.h
 *
 * @brief Send data through serial comm.
 *
 * @author Lucas Haug <lucas.haug@thunderatz.org>
 *
 * @date 11/2019
 */

#ifndef __SERIAL_H__
#define __SERIAL_H__

/*****************************************
 * Public Function Prototypes
 *****************************************/

/**
 * @brief Initializes serial comm.
 */
void serial_init(void);

/**
 * @brief Send data through serial comm.
 *
 * @param data Data to be sent.
 */
void serial_printf(char* data);

#endif // __SERIAL_H__
