/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: MCAL				********************************/
/*******************************	AWC: RCC				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"



void RCC_voidInitSysClock(void)
{
	#if RCC_SYSCLK == RCC_SYSCLK_HSE_RC
	
		/*enable HSE and bypass*/
		SET_BIT(RCC_CR,RCC_CR_HSEON);
		SET_BIT(RCC_CR,RCC_CR_HSEBYP);
		
		while(GET_BIT(RCC_CR,RCC_CR_HSERDY) != 1)
		{
			//wait
		}
		
		/*select HSE as SYSCLK*/
		SET_BIT(RCC_CFGR,RCC_CFGR_SW0);
		CLR_BIT(RCC_CFGR,RCC_CFGR_SW1);
	
	#elif RCC_SYSCLK == RCC_SYSCLK_HSE_CRYSTAL
	
		/*enable HSE and disable bypass*/
		SET_BIT(RCC_CR,RCC_CR_HSEON);
		CLR_BIT(RCC_CR,RCC_CR_HSEBYP);
	
		while(GET_BIT(RCC_CR,RCC_CR_HSERDY) != 1)
		{
			//wait
		}
		
		/*select HSE as SYSCLK*/
		SET_BIT(RCC_CFGR,RCC_CFGR_SW0);
		CLR_BIT(RCC_CFGR,RCC_CFGR_SW1);
	
	#elif RCC_SYSCLK == RCC_SYSCLK_HSI
	
		/*enable HSI*/
		SET_BIT(RCC_CR,RCC_CR_HSION);
		
		while(GET_BIT(RCC_CR,RCC_CR_HSIRDY) != 1)
		{
			//wait
		}
		
		/*select HSI as SYSCLK*/
		CLR_BIT(RCC_CFGR,RCC_CFGR_SW0);
		CLR_BIT(RCC_CFGR,RCC_CFGR_SW1);
	
	
	#elif RCC_SYSCLK == RCC_SYSCLK_PLL
	
		#if RCC_PLL_CLK == RCC_PLL_CLK_HSI_DIV_2
			
			CLR_BIT(RCC_CFGR,RCC_CFGR_PLLSRC);
			SET_BIT(RCC_CR,RCC_CR_HSION);
			
			while(GET_BIT(RCC_CR,RCC_CR_HSIRDY) != 1)
			{
				//wait
			}
			
			SET_BIT(RCC_CR,RCC_CR_PLLON);
			
			while(GET_BIT(RCC_CR,RCC_CR_PLLRDY) != 1)
			{
				//wait
			}
			
			CLR_BIT(RCC_CFGR,RCC_CFGR_SW0);
			SET_BIT(RCC_CFGR,RCC_CFGR_SW1);
			
		#elif RCC_PLL_CLK == RCC_PLL_CLK_HSE_DIV_2	
		
			SET_BIT(RCC_CFGR,RCC_CFGR_PLLSRC);
			SET_BIT(RCC_CR,RCC_CR_HSEON);
			SET_BIT(RCC_CFGR,RCC_CFGR_PLLXTPRE);
			
			while(GET_BIT(RCC_CR,RCC_CR_HSERDY) != 1)
			{
				//wait
			}
			
			SET_BIT(RCC_CR,RCC_CR_PLLON);
			
			while(GET_BIT(RCC_CR,RCC_CR_PLLRDY) != 1)
			{
				//wait
			}
			
			CLR_BIT(RCC_CFGR,RCC_CFGR_SW0);
			SET_BIT(RCC_CFGR,RCC_CFGR_SW1);
			
		#elif RCC_PLL_CLK == RCC_PLL_CLK_HSE
		
			SET_BIT(RCC_CFGR,RCC_CFGR_PLLSRC);
			SET_BIT(RCC_CR,RCC_CR_HSEON);
			
			while(GET_BIT(RCC_CR,RCC_CR_HSERDY) != 1)
			{
				//wait
			}
			
			SET_BIT(RCC_CR,RCC_CR_PLLON);
			
			while(GET_BIT(RCC_CR,RCC_CR_PLLRDY) != 1)
			{
				//wait
			}
			
			CLR_BIT(RCC_CFGR,RCC_CFGR_SW0);
			SET_BIT(RCC_CFGR,RCC_CFGR_SW1);
			
		#endif
	
	#endif
	
}



void RCC_voidEnableClock(u8 Copy_u8BusId, u8 Copy_u8PerId)
{
	if (Copy_u8PerId <= 31)
	{
		switch (Copy_u8BusId)
		{
			case RCC_AHB  : SET_BIT(RCC_AHBENR  ,Copy_u8PerId);   break;
			case RCC_APB1 : SET_BIT(RCC_APB1ENR ,Copy_u8PerId);   break;
			case RCC_APB2 : SET_BIT(RCC_APB2ENR ,Copy_u8PerId);   break;
		}
	}
	
	else
	{
		/* Return Error */
	}

}


void RCC_voidDisableClock(u8 Copy_u8BusId, u8 Copy_u8PerId)
{
	if (Copy_u8PerId <= 31)
	{
		switch (Copy_u8BusId)
		{
			case RCC_AHB  : CLR_BIT(RCC_AHBENR  ,Copy_u8PerId);   break;
			case RCC_APB1 : CLR_BIT(RCC_APB1ENR ,Copy_u8PerId);   break;
			case RCC_APB2 : CLR_BIT(RCC_APB2ENR ,Copy_u8PerId);   break;
		}
	}
	
	else
	{
		/* Return Error */
	}
}

