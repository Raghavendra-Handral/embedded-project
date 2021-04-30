/**
 * @file activity_3.h
 * @author your Raghavendra Handral 
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _ACTIVITY_3_H_
#define _ACTIVITY_3_H_

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
 * @brief Initaialises registers required for timers and counters
 * 
 */
void InitPWM(void);
/**
 * @brief To convert ADC value (0-1024) to according temperature
 * 
 * @param ADCvalue ADC value 0 to 1024
 * @return char temperatue value based on ADC
 */
char activity3 (uint16_t ADCvalue);



#endif 