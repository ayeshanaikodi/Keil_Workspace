#include "Board_LED.h"
#include <stdint.h>
#include "Board_Buttons.h"

void delay()
{
	uint32_t i;
	for (i=0;i<500000; i++);
	
}


int main()
{
	LED_Initialize();
	Buttons_Initialize();
	while(1){

	LED_On(0);
	delay();
	LED_Off(0);
	delay();

	}	
}
