/*
 * Blink.c
 *
 * Created: 8/31/2013 12:31:45 PM
 *  Author: Shannon Strutz
 *	Website: www.shannonstrutz.com
 *	E-mail: strutz.shannon@gmail.com
 *  
 *	Usage: Connect the anode side of an LED to pins PB0 and another LED to PB1
 *		   Connect a resistor to each of the cathodes of the LEDs
 *		   Connect the other side of the resistor to ground
 *
 *		   For a faster blink, change the Delay variable
 *
 *
 *	This code is under the Creative Commons Attribution-ShareAlike 3.0 Unported License
 *	A human-readable of this license is here: http://creativecommons.org/licenses/by-sa/3.0/
 *	A full legal text of this license is here: http://creativecommons.org/licenses/by-sa/3.0/legalcode
 */ 
#define F_CPU 8000000UL

#include <util/delay.h>
#include <avr/io.h>
#include <inttypes.h>

#define LED1 PC6
#define LED2 PC7
#define Delay 20


int main(void)
{
	
	DDRC |= (1<<PC6) | (1<<PC7);
		
	while(1){
		PORTC |= (1<<PC6);
		PORTC &= ~(1<<PC7);
		_delay_ms(Delay);
		
		PORTC |= (1<<PC7);
		PORTC &= ~(1<<PC6);
		_delay_ms(Delay);
	}	
}