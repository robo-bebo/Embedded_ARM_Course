/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: MCAL				********************************/
/*******************************	AWC: GPIO				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"
#include "GPIO_interface.h"


void GPIO_voidSetPinDirection(u8 copy_u8PortId, u8 copy_u8PinId, u8 copy_u8Mode)
{
	
	switch(copy_u8PortId)
	{
		
		case GPIO_PORTA:
		
			if(copy_u8PinId <= 7)
			{
				GPIOA_CRL = ((GPIOA_CRL & ~(0b1111 << (copy_u8PinId * 4))) |  (copy_u8Mode * 4));
			}
			else if(copy_u8PinId <= 15)
			{
				copy_u8PinId -= 8;
				GPIOA_CRH = ((GPIOA_CRH & ~(0b1111 << (copy_u8PinId * 4))) |  (copy_u8Mode * 4));
			}
		break;
			
		case GPIO_PORTB:
			if(copy_u8PinId <= 7)
			{
				GPIOB_CRL = ((GPIOA_CRL & ~(0b1111 << (copy_u8PinId * 4))) |  (copy_u8Mode * 4));
			}
			else if(copy_u8PinId <= 15)
			{
				copy_u8PinId -= 8;
				GPIOB_CRH = ((GPIOA_CRH & ~(0b1111 << (copy_u8PinId * 4))) |  (copy_u8Mode * 4));
			}
		break;
		
	}
}

void GPIO_voidSetPinValue(u8 copy_u8PortId, u8 copy_u8PinId, u8 copy_u8Value)
{
	switch(copy_u8PortId)
	{
		case GPIO_PORTA: WRITE_BIT(GPIOA_ODR,copy_u8PinId,copy_u8Value); break;	
		case GPIO_PORTB: WRITE_BIT(GPIOB_ODR,copy_u8PinId,copy_u8Value); break;
	
	}
	
}

u8 GPIO_u8GetPinValue(u8 copy_u8PortId, u8 copy_u8PinId)
{
	
	switch(copy_u8PortId)
	{
		case GPIO_PORTA: return(GET_BIT(GPIOA_IDR,copy_u8PinId)); break;	
		case GPIO_PORTB: return(GET_BIT(GPIOB_IDR,copy_u8PinId)); break;
	
	}
	
}



