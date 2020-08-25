/*
 * ADC.c
 *
 * Created: 11/26/2014 5:46:08 PM
 */ 
#include "ADC.h"

void ADC_init(){
	SET_BIT(ADMUX, REFS0);	//Select VREF
	SET_BIT(ADCSRA, ADPS0);	//Select 128 pre-scaler
	SET_BIT(ADCSRA, ADPS1); //Select 128 pre-scaler
	SET_BIT(ADCSRA, ADPS2); //Select 128 pre-scaler
	SET_BIT(ADCSRA, ADEN);	//Enable ADC module
}

uint16 ADC_Read(uint8 channel){
	ADMUX &= 0xE0;	//Clear the previous channel selection by clearing the channel selection bits(least 5 bits in ADMUX)
	ADMUX |= channel;	//Select the channel
	SET_BIT(ADCSRA, ADSC);	//Start conversion
	while(READ_BIT(ADCSRA, ADSC)==1);	//Loop till conversion is finished
	return (ADCL+ (ADCH << 8));		//REturn the ADC value
}

	
