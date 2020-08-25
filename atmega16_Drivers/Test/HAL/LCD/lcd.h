/*
 * lcd.h
 *
 * Created: 13/26/2014 7:40:00 PM
 *  Author: safifi
 */
//#include "std_macros.h"
#include "../../Service/Std_Macros.h"
#include <avr/io.h>
#include <util/delay.h>

#define clear 0x01
#define home  0x02
#define inc_cur_left 0x04
#define inc_cur_right 0x06

#define shift_cur_left 0x10
#define shift_cur_right 0x14
#define shift_display_left 0x18
#define shift_display_right 0x1c

#define nd_line 0xc0
#define st_line 0x80
#define INIT_PORT DDRC |= 0xfc;


#define EN(x)   if (x == 0) CLEAR_BIT(PORTC,6); else SET_BIT(PORTC,6);;
#define RS(x)   if (x == 0) CLEAR_BIT(PORTC,7); else SET_BIT(PORTC,7);;
#define D7(x)   if (x == 0) CLEAR_BIT(PORTC,5); else SET_BIT(PORTC,5);;
#define D6(x)   if (x == 0) CLEAR_BIT(PORTC,4); else SET_BIT(PORTC,4);;
#define D5(x)   if (x == 0) CLEAR_BIT(PORTC,3); else SET_BIT(PORTC,3);;
#define D4(x)   if (x == 0) CLEAR_BIT(PORTC,2); else SET_BIT(PORTC,2);;

// configure LCD port
void lcd_init();

// to  send command to LCD
void lcd_write_cmd(uint8_t);

// to  send data to LCD
void lcd_write_char(uint8_t);

// write complete txt
void lcd_write_txt(uint8_t *);

// write number 
void lcd_write_number(uint16_t data);

// to update data
void lcd_send_pulse_for_update_data_or_cmd();

//Convert from int to ascii string
void IntToString(uint16_t number, uint8_t *txt);
