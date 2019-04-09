#include <stdint.h>
#include <string.h>

char const mydata[]="Ayesha Naikodi";

//#define RAM_ADDRESS 0x20000000

int main(){
	
char name[strlen(mydata)];

	for( int i=0; i< strlen(mydata);i++){
	name[i] = mydata[i];
//	*((uint8_t*)RAM_ADDRESS+i)= mydata[i];
	}
	
}
