/**
 * @file Activity.h
 * @author Chetan
 * @brief Project to find PWM an CRO
 * @version 0.1
 * @date 2021-04-23
 * 
 */

/**
 * Include files
 */ 
#ifndef __ACTIVITY3_H_
#define __ACTIVITY3_H_
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
void timer();

char PWM(uint16_t temp);


#endif /** __ACTIVITY3_H_ */
