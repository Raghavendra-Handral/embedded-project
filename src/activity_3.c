/**
 * @file activity_3.c
 * @author Raghavendra Handral
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity_3.h"

/**
 * @brief Initaialises registers required for timers and counters
 * 
 */
void InitPWM(void)
{
    /*Configuring the registers and ports*/
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB|=(1<<PB1);

}

/**
 * @brief To convert ADC value (0-1024) to according temperature
 * 
 * @param ADCvalue ADC value 0 to 1024
 * @return char temperatue value based on ADC
 */
char activity3 (uint16_t ADCvalue)
{
    /* Declare and initialise variables*/
    char temp = 0;

    if(ADCvalue<=209){

        OCR1A = 205; 
        temp = 20;
        _delay_ms(22);
    }
    else if((ADCvalue>=210) && (ADCvalue<=509)){

        OCR1A = 410; 
        temp = 25;
       _delay_ms(22);
    }
    else if((ADCvalue>=510) && (ADCvalue<=709)){

        OCR1A = 717;
        temp = 29;
        _delay_ms(22);
    }
    else if((ADCvalue>=710) && (ADCvalue<=1024)){

        OCR1A = 973; 
        temp = 33;
        _delay_ms(22);
    }
    else{
        OCR1A = 0; 
        temp = 0;
    }
    return temp;
}