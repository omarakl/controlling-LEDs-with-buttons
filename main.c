#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/delay.h>

int main() {
	
	DDRD = 0xFF;
	PORTD = 0;
	DDRB = 0x00;
	PORTB = 0xFF;
	
	while (1) {
		PORTD = PINB;
		_delay_ms(50);
	}
	
}