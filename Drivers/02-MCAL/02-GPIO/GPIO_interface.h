/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: GPIO				********************************/
/*******************************	AWC: RCC				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/

#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

/*sets DIO pin to OUTPUT with a specific mode*/
void GPIO_voidSetPinDirection(u8 copy_u8PortId, u8 copy_u8PinId, u8 copy_u8Mode);

/*sets DIO pin to LOW or HIGH in case of output*/
void GPIO_voidSetPinValue(u8 copy_u8PortId, u8 copy_u8PinId, u8 copy_u8Value);

/*get DIO pin input value*/
u8 GPIO_u8GetPinValue(u8 copy_u8PortId, u8 copy_u8PinId);


/* Options for copy_u8PortId */
#define GPIO_PORTA	1
#define GPIO_PORTB	2

/* Options for copy_u8PinId */
#define GPIO_PIN0		0
#define GPIO_PIN1		1
#define GPIO_PIN2		2
#define GPIO_PIN3		3
#define GPIO_PIN4		4
#define GPIO_PIN5		5
#define GPIO_PIN6		6
#define GPIO_PIN7		7
#define GPIO_PIN8		8
#define GPIO_PIN9		9
#define GPIO_PIN10		10
#define GPIO_PIN11		11
#define GPIO_PIN12		12
#define GPIO_PIN13		13
#define GPIO_PIN14		14
#define GPIO_PIN15		15 


/* Options for copy_u8PinValue */
#define	GPIO_PIN_LOW	0
#define	GPIO_PIN_HIGH	1

/*Options for copy_u8Mode in case of INPUT */
#define GPIO_INPUT_ANALOG			0
#define GPIO_INPUT_FLOATING			1
#define GPIO_INPUT_PULLED			2

/*Options for copy_u8Mode in case of OUTPUT */
#define GPIO_PUTPUT_PUSH_PULL_10MHz				4
#define GPIO_PUTPUT_OPEN_DRAIN_10MHz			5
#define GPIO_PUTPUT_ALT_PUSH_PULL_10MHz			6
#define GPIO_PUTPUT_ALT_OPEN_DRAIN_10MHz		7
#define GPIO_PUTPUT_PUSH_PULL_2MHz				8
#define GPIO_PUTPUT_OPEN_DRAIN_2MHz				9
#define GPIO_PUTPUT_ALT_PUSH_PULL_2MHz			10
#define GPIO_PUTPUT_ALT_OPEN_DRAIN_2MHz			11
#define GPIO_PUTPUT_PUSH_PULL_50MHz				12
#define GPIO_PUTPUT_OPEN_DRAIN_50MHz			13
#define GPIO_PUTPUT_ALT_PUSH_PULL_50MHz			14
#define GPIO_PUTPUT_ALT_OPEN_DRAIN_50MHz		15



#endif