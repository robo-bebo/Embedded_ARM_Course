/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: MCAL				********************************/
/*******************************	AWC: RCC				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/

#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

/*enbale clk for a specific peripheral*/
void RCC_voidEnableClock(u8 Copy_u8BusId, u8 Copy_u8PerId);

/*disable clk for a specific peripheral*/
void RCC_voidDisableClock(u8 Copy_u8BusId, u8 Copy_u8PerId);

/*options for Copy_u8BusId*/
#define RCC_AHB_ID    1 
#define RCC_APB1      2
#define RCC_APB2      3 

/*options for Copy_u8PerId*/
#define IOPA	2
#define	IOPB	3
#define	IOPC	4


#endif