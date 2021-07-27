/**
 * @file Activity1.c
 * @author Chetan
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Activity1.h"


void delay_ms(uint32_t delay_time)
{
	uint32_t units = 0;
	for (units = 0; units <= delay_time; units++)
	{
		_delay_ms(1);
	}
}
void change_led_state(uint8_t state)
{
	 
        if(PINC & (1<<0))  
        {
            PORTB= PORTB | (1<<4);
        }
        else  
        {
            PORTB= PORTB & ~(1<<4);  
        }
}
void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB =DDRB | (1<<4);  
    DDRC =DDRC & ~(1<<0);
}
