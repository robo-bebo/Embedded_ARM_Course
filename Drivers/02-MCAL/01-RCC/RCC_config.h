
/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: MCAL				********************************/
/*******************************	AWC: RCC				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/

#ifndef _RCC_CONFIG_H
#define _RCC_CONFIG_H


/* system clk options
		1-RCC_SYSCLK_HSE_RC
		2-RCC_SYSCLK_HSE_CRYSTAL
		3-RCC_SYSCLK_HSI
		4-RCC_SYSCLK_PLL		*/
	
#define RCC_SYSCLK	RCC_SYSCLK_HSI


/* PLL clk options
		1-RCC_PLL_CLK_HSI_DIV_2
		2-RCC_PLL_CLK_HSE_DIV_2	
		3-RCC_PLL_CLK_HSE*/

#define RCC_PLL_CLK		RCC_PLL_CLK_HSI_DIV_2	


/*PLL multiplier options

		1-RCC_PLL_CLK_MUL_2
		2-RCC_PLL_CLK_MUL_3
		3-RCC_PLL_CLK_MUL_4
		4-RCC_PLL_CLK_MUL_5
		5-RCC_PLL_CLK_MUL_6
		6-RCC_PLL_CLK_MUL_7
		7-RCC_PLL_CLK_MUL_8
		8-RCC_PLL_CLK_MUL_9
		9-RCC_PLL_CLK_MUL_10
		10-RCC_PLL_CLK_MUL_11
		11-RCC_PLL_CLK_MUL_12
		12-RCC_PLL_CLK_MUL_13
		13-RCC_PLL_CLK_MUL_14
		14-RCC_PLL_CLK_MUL_15
		15-RCC_PLL_CLK_MUL_16
		16-RCC_PLL_CLK_MUL_16			*/
		
#define RCC_PLL_CLK_MUL		RCC_PLL_CLK_MUL_2


/*MCO options

		1-RCC_MCO_NOCLK
		2-RCC_MCO_SYSCLK
		3-RCC_MCO_HSE
		4-RCC_MCO_HSI
		5-RCC_MCO_PLL			*/
		
#define RCC_MCO		RCC_MCO_HSI


#endif