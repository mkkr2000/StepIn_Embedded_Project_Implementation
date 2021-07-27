/**
 * @file Activity2.h
 * @author Chetan 
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY2_H_
#define __ACTIVITY2_H_





#include <avr/io.h>
#include<util/delay.h>
#include <avr/interrupt.h>

void InitADC();

uint16_t ReadADC(uint8_t ch);
#endif /** __Activity2_H_ */
