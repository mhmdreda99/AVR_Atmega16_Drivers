/*
 * ADC.h
 *
 * Created: 11/26/2014 5:45:32 PM
 */ 


#ifndef ADC_H_
#define ADC_H_

#include "../../Service/Std_Macros.h"
#include "../../Service/Std_Types.h"
#include <avr/io.h>

//ADC initialization function
extern void ADC_init(void);
//This function gets the ADC value for specific channel
extern uint16 ADC_Read(uint8);

#endif /* ADC_H_ */
