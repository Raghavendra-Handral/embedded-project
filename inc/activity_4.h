/**
 * @file activity_4.h
 * @author your Raghavendra Handral 
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _ACTIVITY_4_H_
#define _ACTIVITY_4_H_

/**
 * Include files
 */ 
#define F_CPU 16000000UL 
#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>

/**
 * @brief Macro definitions
 * 
 */

/**
 * Function Definitions
 */

/**
 * @brief Initialises ports
 * 
 * @param ubrr_value 
 */
void InitUART(uint16_t uvalue);

/**
 * @brief To write data on UART port
 * 
 * @param pwmdata 
 */
void activity4(char pwmdata);




#endif 