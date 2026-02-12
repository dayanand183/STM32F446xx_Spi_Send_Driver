/*
 * stm32f446xx_gpio_driver.h
 *
 *  Created on: 05-Feb-2026
 *      Author: dayanand
 */

#ifndef INC_STM32F446XX_GPIO_DRIVER_H_
#define INC_STM32F446XX_GPIO_DRIVER_H_

#include "stm32f446xx.h"

typedef struct
{
	uint8_t Gpio_PinNumber;				/* Reference values from the @GPIO_PIN_NUMBERS */
	uint8_t Gpio_Pinmode;				/* Reference values from the @GPIO_PIN_MODES */
	uint8_t Gpio_Speed;					/* Reference values from the @GPIO_OSPEEDR */
	uint8_t Gpio_OPType;				/* Reference values from the @GPIO_OPTYPE */
	uint8_t Gpio_PUPD;					/* Reference values from the @GPIO_PUPDR */
	uint8_t Gpio_Altfun;
}GPIO_Config_t;


typedef struct
{
	GPIO_RegDef_t *pGPIOx;
	GPIO_Config_t GPIO_Config;
}GPIO_Handle_t;


/*
 * @GPIO_PIN_NUMBERS
 * GPIO Pin numbers
 */

#define GPIO_PIN_NO_0          		0
#define GPIO_PIN_NO_1          		1
#define GPIO_PIN_NO_2          		2
#define GPIO_PIN_NO_3          		3
#define GPIO_PIN_NO_4          		4
#define GPIO_PIN_NO_5          		5
#define GPIO_PIN_NO_6          		6
#define GPIO_PIN_NO_7         	 	7
#define GPIO_PIN_NO_8          		8
#define GPIO_PIN_NO_9          		9
#define GPIO_PIN_NO_10         		10
#define GPIO_PIN_NO_11         		11
#define GPIO_PIN_NO_12         		12
#define GPIO_PIN_NO_13         		13
#define GPIO_PIN_NO_14         		14
#define GPIO_PIN_NO_15         		15


/*
 * @GPIO_PIN_MODES
 * Set the GPIOx port mode register
 */

#define GPIO_INPUT_MODE				0
#define GPIO_OUTPUT_MODE			1
#define GPIO_ALTFUN_MODE			2
#define GPIO_ANALOG_MODE			3
#define GPIO_FE_IT_MODE				4
#define GPIO_RE_IT_MODE				5
#define GPIO_RFE_IT_MODE			6

/*
 * @GPIO_OPTYPE
 * Output types of the GPIO pins
 */

#define GPIO_OP_TYPE_PP				0
#define GPIO_OP_TYPE_OD				1

/*
 * @GPIO_OSPEEDR
 * Speed modes of the GPIO pins
 */

#define GPIO_LOW_SPEED				0
#define GPIO_MEDIUM_SPEED			1
#define GPIO_FAST_SPEED				2
#define GPIO_HIGH_SPEED				3

/*
 * @GPIO_PUPDR
 * Pull up Pull down Mode for GPIO pins
 */

#define GPIO_NO_PU_PD				0
#define GPIO_PU						1
#define GPIO_PD						2


void GPIO_InIt(GPIO_Handle_t *pGPIOHandle);
void GPIO_DeInIt(GPIO_RegDef_t *pGPIOx);

void GPIO_PClockControl(GPIO_RegDef_t *pGPIOx, uint8_t enordi);

void GPIO_OutputPort(GPIO_RegDef_t *pGPIOx, uint16_t state);
void GPIO_OutputPin(GPIO_RegDef_t *pGPIOx, uint8_t pinNumber, uint8_t state);
uint16_t GPIO_InputPort(GPIO_RegDef_t *pGPIOx);
uint8_t GPIO_InputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);
void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);

//void GPIO_IRQHandler(void);
//void GPIO_IRQEnable(void);


#endif /* INC_STM32F446XX_GPIO_DRIVER_H_ */
