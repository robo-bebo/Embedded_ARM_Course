/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: MCAL				********************************/
/*******************************	AWC: RCC				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/

#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H


/*Register Base Address*/
#define RCC_BASE_ADDRESS 0x40021000


/**********	Clock control register	**************/
#define RCC_CR         *((u32*)(RCC_BASE_ADDRESS+0x00))		  

#define RCC_CR_HSION		1		//Internal high-speed clock enable
#define RCC_CR_HSIRDY		2       //Internal high-speed clock ready flag
#define RCC_CR_HSEON		16      //HSE clock enable
#define RCC_CR_HSERDY		17      //External high-speed clock ready flag
#define RCC_CR_HSEBYP		18      //External high-speed clock bypass
#define RCC_CR_CSSON		19      //Clock security system enable
#define RCC_CR_PLLON		24      //PLL enable
#define RCC_CR_PLLRDY		25      //PLL clock ready flag


/*********	Clock configuration register  ************/ 
#define RCC_CFGR       *((u32*)(RCC_BASE_ADDRESS+0x04))      

#define RCC_CFGR_SW0		0		//System clock switch0
#define RCC_CFGR_SW1		1		//System clock switch1
#define RCC_CFGR_PLLSRC		16		//PLL entry clock source
#define RCC_CFGR_PLLXTPRE	17		//HSE divider for PLL entry





/************	Clock interrupt register	****************/
#define RCC_CIR        *((u32*)(RCC_BASE_ADDRESS+0x08))
 
/**************APB2 peripheral reset register	*****************/ 
#define RCC_APB2RSTR   *((u32*)(RCC_BASE_ADDRESS+0x0C)) 

/************	APB1 peripheral reset register	****************/      
#define RCC_APB1RSTR   *((u32*)(RCC_BASE_ADDRESS+0x10))   

/************	AHB peripheral clock enable register	************/    
#define RCC_AHBENR     *((u32*)(RCC_BASE_ADDRESS+0x14))       

/************	APB1 peripheral clock enable register	************/
#define RCC_APB2ENR    *((u32*)(RCC_BASE_ADDRESS+0x18))     

/************	APB2 peripheral clock enable register *************/ 
#define RCC_APB1ENR    *((u32*)(RCC_BASE_ADDRESS+0x1C))    

/************	Backup domain control register	**************/   
#define RCC_BDCR       *((u32*)(RCC_BASE_ADDRESS+0x20))     

/**************	Control/status register	*****************/  
#define RCC_CSR        *((u32*)(RCC_BASE_ADDRESS+0x24))       





/*system clk options*/
#define RCC_SYSCLK_HSE_RC			1
#define RCC_SYSCLK_HSE_CRYSTAL		2
#define RCC_SYSCLK_HSI				3
#define RCC_SYSCLK_PLL				4		


/*PLL input clk options*/
#define	RCC_PLL_CLK_HSI_DIV_2	1
#define	RCC_PLL_CLK_HSE_DIV_2	2	
#define	RCC_PLL_CLK_HSE			3


/*PLL clk multiplier options*/

#define RCC_PLL_CLK_MUL_2			1
#define RCC_PLL_CLK_MUL_3			2
#define RCC_PLL_CLK_MUL_4			3
#define RCC_PLL_CLK_MUL_5			4
#define RCC_PLL_CLK_MUL_6			5
#define RCC_PLL_CLK_MUL_7			6
#define RCC_PLL_CLK_MUL_8			7
#define RCC_PLL_CLK_MUL_9			8
#define RCC_PLL_CLK_MUL_10			9
#define	RCC_PLL_CLK_MUL_11			10
#define	RCC_PLL_CLK_MUL_12          11
#define	RCC_PLL_CLK_MUL_13          12
#define	RCC_PLL_CLK_MUL_14          13
#define	RCC_PLL_CLK_MUL_15          14
#define	RCC_PLL_CLK_MUL_16          15
#define	RCC_PLL_CLK_MUL_16			16


/*MCO options*/

#define	RCC_MCO_NOCLK				1
#define	RCC_MCO_SYSCLK              2
#define	RCC_MCO_HSE                 3
#define	RCC_MCO_HSI                 4
#define	RCC_MCO_PLL		            5
		

#endif