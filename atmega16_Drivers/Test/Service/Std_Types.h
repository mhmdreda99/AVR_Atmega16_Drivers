/*
 * Std_Types.h
 *
 *  Created on: May 3, 2019
 *      Author: Kotp
 */

#ifndef SERVICE_STD_TYPES_H_
#define SERVICE_STD_TYPES_H_


#define NULL '/0'

//Data type for 1 Byte unsigned data
//Data range [0..255]
typedef unsigned char uint8;

//Data type for 2 Bytes unsigned data
//Data range [0..65535]
typedef unsigned short int uint16;

//Data type for 4 Bytes unsigned data
//Data range [0..4,294,967,295]
typedef unsigned long int uint32;

//Data type for 1 Byte signed data
//Data range [-127..127]
typedef signed char sint8;

//Data type for 2 Bytes signed data
//Data range [-32767..32767]
typedef signed short int sint16;

//Data type for 4 Bytes signed data
//Data range [-2147483647..2147483647]
typedef signed long int sint32;

//Data type for floating numbers
typedef float f32;

//Data type for digital logic
typedef enum{
	FALSE,		//Logic 0
	TRUE		//Logic 1
}Boolean;

//Data type for return status
typedef enum{
	E_OK,		//No error
	E_NOK		//Error detected
}Std_Return;



#endif /* SERVICE_STD_TYPES_H_ */
