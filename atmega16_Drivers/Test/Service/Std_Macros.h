/*
 * Std_Macros.h
 *
 *  Created on: May 3, 2019
 *      Author: Kotp
 */

#ifndef SERVICE_STD_MACROS_H_
#define SERVICE_STD_MACROS_H_

//Macro to write specific bit in a register to one
//Parameters: 	reg--> The register
//			  	bit--> required bit to be set
#define SET_BIT(reg, bit) 		(reg |= (1<<bit))

//Macro to write specific bit in a register to zero
//Parameters: 	reg--> The register
//			  	bit--> required bit
#define CLEAR_BIT(reg, bit)		(reg &= ~(1<<bit))

//Macro to toggle bit state (if bit is 0 toggle it to 1 and vice versa)
//Parameters: 	reg--> The register
//			  	bit--> required bit
#define TOGGLE_BIT(reg, bit)		(reg ^= (1<<bit))

//Macro to read bit state
//This macro return the bit state 0 or 1
//Parameters: 	reg--> The register
//			  	bit--> required bit
#define READ_BIT(reg, bit)		(reg & (1<<bit))

#endif /* SERVICE_STD_MACROS_H_ */
