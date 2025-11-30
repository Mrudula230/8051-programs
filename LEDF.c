#include<reg51.h> 		//header file//

void  delay_ms(unsigned int time)	   //This Function is used to cause delay between LED ON and OFF events
{  
 unsigned int  i, j;
 for (j=0; j<time; j++)
  for(i=0; i<113; i++);
}


void main() 			//the program execution stat point//
{
	unsigned int i; 	//data type//
	while(1) 			//for continuous loop//
	{
		P0=0xAA; 				//send the hexa value to the port0//
		delay_ms(1000);
		P0=0x55; 				//send the hexa value to the port0//
		delay_ms(1000);
	}
}