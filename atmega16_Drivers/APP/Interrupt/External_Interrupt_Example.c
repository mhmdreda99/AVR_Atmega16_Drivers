
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/io.h>
#include "../Service/StdMacros.h"
#include "../Service/StdTypes.h"
#include "../MCAL/GPIO/GPIO.h"

#define F_CPU	8000000UL

#define LED_PIN		7
#define BUTTON_PIN	0


ISR(INT2_vect){
	TOGGLE_BIT(PORTB, LED_PIN);
}



int main() {
	GPIO_init();

	/*Configuration*/
	GPIO_setPinDirection(GPIO_PORTB, LED_PIN, GPIO_OUTPUT);
	GPIO_setPinDirection(GPIO_PORTB, BUTTON_PIN, GPIO_INPUT);

	SET_BIT(SREG, 7);
	SET_BIT(GICR, 5);


	/*Initialization*/
	GPIO_writePin(GPIO_PORTB, LED_PIN, GPIO_LOW);

	while (1) {

	}

	return 0;
}
