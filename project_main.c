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



#include "activity_1.h"
#include "activity_2.h"
#include "activity_3.h"
#include "activity_4.h"



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
    uint16_t Temp=0;
    char TempData;
    /* Initialize Peripherals */
	peripheral_init();

    while(1)
    {
        while (activity1());
        Temp =     activity2(0);
        TempData = activity3(Temp);
                   activity4(TempData);

        
    }
    return 0;
}
