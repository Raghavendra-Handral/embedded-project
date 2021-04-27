/**
 * @file project_main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "project_config.h"

#include "user_utils.h"
#include "Header.h"

#include <avr/io.h>
#include <avr/delay.h>


/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB |= (1<<PB0);
    /* Configure input Pins */
    DDRD &= ~(3<<PD0);
    /* Configure input bits */
    PORTD |= (3<<PD0);
}


/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 */
int main()
{
    /* Initialize Peripherals */
	peripheral_init();

    while(1)
    {
        if(!(PIND&(1<<PD0)) && !(PIND&(2<<PD0)))
        {
            PORTB |= (1<<PB0); //Led On
            _delay_ms(200);
        }
        else
        {
           PORTB &= ~(1<<PB0); //Led Off
           _delay_ms(100);
        }
    }
    return 0;
}
