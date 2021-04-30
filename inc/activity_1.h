/**
 * @file activity_1.h
 * @author your Raghavendra Handral 
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _activity_1_H
#define _activity_1_H




/**
 * Macro Definitions
 */

#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */
#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */

/**
 * Include files
 */ 
#define F_CPU 16000000UL 
#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>

/**
 * Function Definitions
 */

/**
 * @brief 
 * 
 * @param state 
 */
void change_led_state(uint8_t state);

/**
 * @brief If button sensor and heater button, both are on than turns ON LED
 * 
 * @return int 1 if LED turns ON else 0
 */
int activity1();




#endif