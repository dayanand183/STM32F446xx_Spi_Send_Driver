/*
 * main.c
 *
 *  Created on: 06-Feb-2026
 *      Author: dayanand
 */

#include "stm32f446xx.h"


void delay(void);
int main(void)
{
	GPIO_Handle_t GpioLed;

	GpioLed.pGPIOx = GPIOA;
	GpioLed.GPIO_Config.Gpio_PinNumber = GPIO_PIN_NO_5;
	GpioLed.GPIO_Config.Gpio_Pinmode = GPIO_OUTPUT_MODE;
	GpioLed.GPIO_Config.Gpio_Speed = GPIO_MEDIUM_SPEED;
	GpioLed.GPIO_Config.Gpio_PUPD = GPIO_NO_PU_PD;
	GpioLed.GPIO_Config.Gpio_OPType = GPIO_OP_TYPE_PP;

	// Enable the Clock for GPIOA
	GPIO_PClockControl(GPIOA, ENABLE);

	// Initialise the GPIO
	GPIO_InIt(&GpioLed);

	while(1)
	{
//		GPIO_ToggleOutputPin(GPIOA, GPIO_PIN_NO_5);
//		delay();
		GPIO_OutputPin(GPIOA, GPIO_PIN_NO_5, ENABLE);
		delay();
		GPIO_OutputPin(GPIOA, GPIO_PIN_NO_5, DISABLE);
		delay();

	}
	return 0;
}

void delay(void)
{
	for(uint32_t i=0; i<200000; i++);
}
