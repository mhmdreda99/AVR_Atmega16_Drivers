/*
 * keypad.c
 *
 * Created: 4/22/2017 3:02:41 AM
 *  Author: safifi
 */ 

#ifndef  key
#define key

#include "../../Service/Std_Macros.h"
#include "../../Service/Std_Types.h"
#include <avr/io.h>
#include <util/delay.h>

#define mykeypadport  SET_BIT(DDRD,0); SET_BIT(DDRD,1); SET_BIT(DDRD,2); CLEAR_BIT(DDRA,4); CLEAR_BIT(DDRD,5); CLEAR_BIT(DDRD,6);
#define pullup  PORTD |= 0b01110000;
// Keypad configurations
#define k1(x)   if (x == 0) CLEAR_BIT(PORTD,0); else SET_BIT(PORTD,0);
#define k2(x)   if (x == 0) CLEAR_BIT(PORTD,1); else SET_BIT(PORTD,1);
#define k3(x)   if (x == 0) CLEAR_BIT(PORTD,2); else SET_BIT(PORTD,2);

#define k4  READ_BIT(PIND,4)	//Row 1
#define k5  READ_BIT(PIND,5)	//Row 2
#define k6  READ_BIT(PIND,6)	//Row 3

// initialize keypad
void keypad_init();

// Get new click
sint8 keypad_click();

#endif

