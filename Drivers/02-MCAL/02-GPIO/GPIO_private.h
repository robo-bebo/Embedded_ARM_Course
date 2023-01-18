/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: MCAL				********************************/
/*******************************	AWC: GPIO				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/

#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H


/*Registers base Addresses*/
#define GPIOA_BASE_ADDRESS 0x4001 0800

#define GPIOB_BASE_ADDRESS 0x4001 0C00



/* PORTA configuration register low  */
#define GPIOA_CRL        *((u32*)(GPIOA_BASE_ADDRESS+0x00))

/* PORTA configuration register high  */
#define GPIOA_CRH        *((u32*)(GPIOA_BASE_ADDRESS+0x04))	

/* PORTA input data register  */
#define GPIOA_IDR        *((u32*)(GPIOA_BASE_ADDRESS+0x08))	

/* PORTA output data register  */
#define GPIOA_ODR        *((u32*)(GPIOA_BASE_ADDRESS+0x0C))  



/* PORTB configuration register low  */
#define GPIOB_CRL        *((u32*)(GPIOB_BASE_ADDRESS+0x00))

/* PORTB configuration register high  */
#define GPIOB_CRH        *((u32*)(GPIOB_BASE_ADDRESS+0x04))	

/* PORTB input data register  */
#define GPIOB_IDR        *((u32*)(GPIOB_BASE_ADDRESS+0x08))	

/* PORTB output data register  */
#define GPIOB_ODR        *((u32*)(GPIOB_BASE_ADDRESS+0x0C))  

#endif