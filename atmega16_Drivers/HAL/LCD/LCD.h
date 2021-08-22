/*
 ============================================================================
 Name        : LCD.h
 Author      : Muhamed Reda
 Layer		 : HAL
 Target		 : ATMEGA16-32
 Version     : 1.0
 Date		 : 19/10/2019
 Copyright   : This is an open source code for all embedded systems students
 Description : Header file for the LCD driver
 ============================================================================
 */
//To protect the file against multiple includes
#ifndef HAL_LCD_LCD_H_
#define HAL_LCD_LCD_H_

/*********************************/
/*****Files include section*******/
/*********************************/
#include "../../Service/StdMacros.h"
#include "../../Service/StdTypes.h"
#include "../../MCAL/GPIO/GPIO.h"
#include <util/delay.h>

/*********************************/
/*********Defines section*********/
/*********************************/
//Define commands list
#define lCD_CLEAR			0x01		//Clear the screen
#define LCD_GO_HOME		 	0x02		//Go to 0,0 line
#define LCD_4_BIT_MODE 		0x28		//Set LCD to 4 bit mode
#define LCD_CURSOR_OFF		0x0C		//Turn off cursor

#define LCD_FUNCTION_8BIT_2LINES   					(0x38)
#define LCD_FUNCTION_4BIT_2LINES   					(0x28)
#define LCD_MOVE_DISP_RIGHT       					(0x1C)
#define LCD_MOVE_DISP_LEFT   						(0x18)
#define LCD_MOVE_CURSOR_RIGHT   					(0x14)
#define LCD_MOVE_CURSOR_LEFT 	  					(0x10)
#define LCD_DISP_OFF   								(0x08)
#define LCD_DISP_ON_CURSOR   						(0x0E)
#define LCD_DISP_ON_CURSOR_BLINK   					(0x0F)
#define LCD_DISP_ON_BLINK   						(0x0D)
#define LCD_ENTRY_DEC   							(0x04)
#define LCD_ENTRY_DEC_SHIFT   						(0x05)
#define LCD_ENTRY_INC_   							(0x06)
#define LCD_ENTRY_INC_SHIFT   						(0x07)
#define LCD_BEGIN_AT_FIRST_RAW						(0x80)
#define LCD_BEGIN_AT_SECOND_RAW						(0xC0)
#define LCD_CLEAR_SCREEN							(0x01)
#define LCD_ENTRY_MODE								(0x06)
/***************************************************************
 *********************Prototypes section************************
 **************************************************************/
//configure LCD pins
void LCD_init(void);
//Function to  send command to LCD
StdReturn LCD_writeCmd(uint8 cmd);
//Function to  write single character on the LCD
StdReturn LCD_writeChar(uint8 data);
//Function to  write text on the LCD
StdReturn LCD_writeTxt(uint8 *text);
//Function to  write number on the LCD
StdReturn LCD_writeNumber(uint16 num);




#endif /* HAL_LCD_LCD_H_ */
