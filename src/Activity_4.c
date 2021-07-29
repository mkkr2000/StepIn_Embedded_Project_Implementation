/**
 * @file UART.c
 * @author Chetan()
 * @brief Declaration of function in uart communication
 * @version 0.1
 * @date 2021-04-30
 * 
 * 
 */
#include<avr/io.h>

/**
 * @brief To Inittialize UART serial communication ports
 * 
 * @param ubrr_value 
 */

/**
 * @brief write the data to UART ports
 * 
 * @param data 
 */
void UARTWritechar(char data)
{
    while(!(UCSR0A & (1<<UDRE0)))
    {

    }
    UDR0 = data;
}
