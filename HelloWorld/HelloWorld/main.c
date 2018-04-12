/*
 * Exercise 5.c
 *
 * Created: 11/04/2018 21:36:37
 * Author : Wane_
 */ 

#define F_CPU 10000000L
#include <avr/io.h>
#include <util/delay.h>
#define ALL_ON 0xff
#include <math.h>

// this signature enables the function to work
void led_on(int led_no);
void led_off(int led_no);
int is_prime(int num);
void light_on(int n);
void light_off();

int main(void)
{
	DDRA  = ALL_ON;
	PORTA = 0xfe;
	
	// in the while condition 0 = false and 1 = true
	for (int n = 1; n < 101; n++)
			if(is_prime(n) == 1)
			{
				light_on(n);
				light_off(n);
			}		
}

void light_on(int n)
{
	PORTA = ~n;
	_delay_ms(4000);
	return;
}

void light_off()
{
	PORTA = 255;
	_delay_ms(1000);
	return;
}

// Function to turn the light of a specific led.
void led_on(int led_no)
{
	//PORTA = PORTA & ~ (1<<led_no);
	PORTA &= ~(1<<led_no);
	_delay_ms(1000);
	return;
}

// function to turn off lights
void led_off(int led_no)
{
	PORTA |= (1<<led_no);
	_delay_ms(1);
	return;
	
}

// function to check if a number is Even
int is_prime(int num)
{
	if(num == 2 || num == 1)
	 return 1;
	 
	for (int i = 2; i <= sqrt(num); i++)
		if(num % i == 0)
			return 0;
	
	return 1;
}

