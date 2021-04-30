/**
 * @file activity_4.c
 * @author Raghavendra Handral
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity_4.h"

/**
 * @brief Initialises ports
 * 
 * @param ubrr_value 
 */
void InitUART(uint16_t uvalue)
{

    UBRR0L = uvalue;
    UBRR0H = (uvalue>>8)&(0x00ff);
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ01);

    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}

/**
 * @brief To write data on UART port
 * 
 * @param pwmdata 
 */
void activity4(char pwmdata)
{
    while(!(UCSR0A & (1<<UDRE0)));
    UDR0 = pwmdata;
}