
/**
 * @file serial.h
 *
 * @brief Send data through serial comm using printf function.
 *
 * @author Lucas Haug <lucas.haug@thunderatz.org>
 *
 * @date 01/2021
 */

#ifndef __SERIAL_H__
#define __SERIAL_H__

#include <stdio.h>

/*****************************************
 * Public Function Prototypes
 *****************************************/

/**
 * @brief Initializes serial comm.
 */
void serial_init(void);

#endif // __SERIAL_H__
