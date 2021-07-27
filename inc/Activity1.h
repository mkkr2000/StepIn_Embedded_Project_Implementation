#ifndef __ACTIVITY1_H_
#define __ACTIVITY1_H_
#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
/**
 * @file Activity.h
 * @author Chetan
 * @brief Project to Blink an LED connected to AVR328 MCU GPIO Pin
 * @version 0.1
 * @date 2021-04-23
 * 
 */

/**
 * Include files
 */ 
#include <avr/io.h>
#include <util/delay.h>

/**
 * Function Definitions
 */

/**
 * @brief To blink the led when a person occuipes seat and switch on the heater
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void change_led_state(uint8_t state);

void delay_ms(uint32_t delay_time);
void peripheral_init(void);

#endif /** __ACTIVITY1_H_ */
