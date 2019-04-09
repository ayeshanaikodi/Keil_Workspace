#include "stm32f446xx.h"                  // Device header

int main()
{
RCC_TypeDef *pRCC;
pRCC = RCC;
	
// 1) Enable HSE (HSI is ON by default)
RCC->CR |= (1<<16);
	
// 2) Wait until HSE is ready
while(!(RCC->CR & (1<<17)));

// 3) Set HSE as SYSCLK	
RCC->CFGR &= ~((1<<1) | (1<<0));  	// Clearing SW=0x00;
RCC->CFGR |= (1<<0);	// Setting SW=0x01;

return 0;	
}
