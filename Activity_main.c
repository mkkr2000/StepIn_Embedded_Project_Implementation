 /**
 * @file Activity_main.c
 * @author Chetan()
 * @brief To blink the led when a person occuipes seat and switch on the heater
 * @date 2021-04-23
 */
#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"

/*header files*/

/**
 * @brief Initialize all the Peripherals and pin configurations
 */





/**
 * @brief Main function where the code execution starts
 * @return int Return 0 if the program completes successfully
 * @note  if pin 0 of port C is high then pin 4 of port B is high
 * @note if above condition is not true then pin 4 of port B remain constant
 */



char temp_data;
int main(void)
{
	/* Initialize Peripherals */
    InitADC();
    char temp_data;
    uint16_t temp;
	peripheral_init();
    timer();

	while (1)
	{
        change_led_state(PD0);
		delay_ms(1000);
         temp=ReadADC(0);
        _delay_ms(200);
        temp_data = PWM(temp);
        UARTWritechar(temp_data);
        OCR0A=0;
        _delay_ms(200);
	}
	return 0;
}
