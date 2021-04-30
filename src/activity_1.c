/**
 * @file activity_1.c
 * @author Raghavendra Handral
 * @brief To take button sensor and heater inputs and operate LED accordingly
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity_1.h"

/**
 * @brief 
 * 
 * @param state 
 * @return int 
 */
void change_led_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}

/**
 * @brief If button sensor and heater button, both are on than turns ON LED
 * 
 * @return int 1 if LED turns ON else 0
 */
int activity1()
{
    
    if(!(PIND&(1<<PD0)) && !(PIND&(2<<PD0)))
    {
        change_led_state(LED_ON); //Led On
        return 1;
        
    }
    else
    {
        change_led_state(LED_OFF); //Led Off
        return 0;
        
    }
    
}