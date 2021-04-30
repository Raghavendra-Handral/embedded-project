/**
 * @file activity_2.h
 * @author your Raghavendra Handral 
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _ACTIVITY_2_H_
#define _ACTIVITY_2_H_

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
#define CONVERSION_GOING  (ADCSRA & (1<<ADIF))

/**
 * Function Definitions
 */

/**
 * @brief Initialises pins required to perform ADC
 * 
 */
void initADC();

/**
 * @brief Perform ADC
 * 
 * @param ch ADC channel
 * @return uint16_t 0 to 1024 - ADC output
 */
uint16_t activity2(uint8_t ch);


#endif 