/**
 * @file activity_2.c
 * @author Raghavendra Handral
 * @brief To read the input from temperature sensor and perform ADC
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity_2.h"


/**
 * @brief Initialises pins required to perform ADC
 * 
 */
void initADC()
{
    /* Select Vref=AVcc*/
    ADMUX |= (1<<REFS0);
    /* Enable ADC*/
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}

/**
 * @brief Perform ADC
 * 
 * @param ch ADC channel
 * @return uint16_t 0 to 1024 - ADC output
 */
uint16_t activity2(uint8_t ch)
{

    /*To select mux channel enabling last 3 bits*/
    ADMUX &= 0xF8;
    /*single conversion mode*/
    ch &= 0x07;
    ADMUX |= ch;
    ADCSRA |= (1<<ADSC);
    /* wait until ADC conversion is complete*/
    while(CONVERSION_GOING);
    ADCSRA|=(1<<ADIF);
    return (ADC);

}