/*
 * main.c
 *
 *  Created on: May 17, 2019
 *      Author: Kotp
 */
#include <avr/io.h>
#include <util/delay.h>
#include "Service/Std_Types.h"
#include "Service/Std_Macros.h"
#include "MCAL/ADC/ADC.h"
#include "HAL/LCD/lcd.h"
#include "HAL/Keypad/keypad.h"
#include "MCAL/I2C/I2C.h"

uint16 adcValue = 0;
uint8 voltage = 0;
uint8 pressedKey = 0;

uint8 adcToVolt(uint16 adcVal);
uint8 text[10] = "Hello";

int main() {

	//uint8 i = 0;
	sint8 pressedKey = -1;

	SET_BIT(DDRB, 3);
	//SET_BIT(DDRB, 1);
	CLEAR_BIT(DDRA, 0);
	ADC_init();
	lcd_init();
	keypad_init();
	I2C_master_init();
	//vKeypadInit();
	I2C_start(0xEE);
	I2C_write(0x55);
	I2C_stop();
	//lcd_write_cmd(st_line);
	lcd_write_txt(text);
	_delay_ms(500);
	lcd_write_cmd(clear);
	CLEAR_BIT(PORTB, 3);
	//CLEAR_BIT(PORTB, 1);

	while (1) {
		/*for(i=0; i<20; i++){
		 lcd_write_number(i);
		 _delay_ms(2000);
		 }*/
		pressedKey = keypad_click();
		if (pressedKey != -1) {
			pressedKey -= 48;
			lcd_write_number(pressedKey);
		}
		pressedKey = -1;
		/*
		 adcValue = ADC_Read(0);
		 voltage = adcToVolt(adcValue);
		 if(voltage < 2 ){
		 SET_BIT(PORTB, 7);
		 }
		 else{
		 CLEAR_BIT(PORTB, 7);
		 }*/

		//pressedKey = ucKeypadScan();
		//if(pressedKey == 'C'){
		//SET_BIT(PORTB, 1);
		//}
		//TOGGLE_BIT(PORTB, 7);
		//_delay_ms(500);
	}

	return 0;
}

uint8 adcToVolt(uint16 adcVal) {

	return ((adcVal * 5) / 1024);
}
