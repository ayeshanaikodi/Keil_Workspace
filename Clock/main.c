#include "stm32f446xx.h"


int main(){

	RCC_TypeDef *pRCC;
	GPIO_TypeDef *pGPIO;
	ADC_TypeDef *pADC;
	
	pRCC = RCC;
	pGPIO = GPIOB;
	pADC = ADC2;
	
	RCC->AHB1ENR |= (1<<1);
	RCC->APB2ENR |= (1<<9);
	
	GPIOB->IDR =0x22;
	GPIOB->ODR =0x32;
	ADC2->CR1 =0x11;

	
	
}
