/*
 * main.c
 *
 * Created: 10/5/2019 3:38:25 AM
 *  Author: Lenovo
 */ 
#include "PROTOTYPE.h"
#define DE 250
int main()
{
	char i;
	BUT_init('D' , 7);
	BUT_init('D' , 6);
	for (i=0 ; i<8 ; i++)
	{
		LED_init('A' , i);
	}	
	while (1)
	{
		if (BUT_read('D' , 7))
		{
			for (i=0 ; i<8 ; i++)
			{
			LED_on('A' , i);
			_delay_ms(DE);
			}
		}			
		if (BUT_read('D' , 6))
		{
			for (i=0 ; i<8 ; i++)
			{
				LED_off('A' , i);
				_delay_ms(DE);
			}
		}										
	}
}