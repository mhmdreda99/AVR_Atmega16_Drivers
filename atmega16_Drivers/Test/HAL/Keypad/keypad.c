


#include "keypad.h"


uint8 keypad_matrix[]={
	'1','2','3',
	'4','5','6',
	'7','8','9'
};

void keypad_init(){
	mykeypadport
	pullup
}
sint8 press(sint8 i){
	if(!k4 )return keypad_matrix[0+i*3];
	if(!k5 )return keypad_matrix[1+i*3];
	if(!k6 )return keypad_matrix[2+i*3];
	_delay_ms(5);
	return -1;
}
	
sint8 keypad_click(){
	static uint8 k = -1;
	sint8 press1;
	k1(0);k2(1);k3(1)	press1 = press(0); if(press1 != -1)	k = press1;
	k1(1);k2(0);k3(1)	press1 = press(1); if(press1 != -1)	k = press1;
	k1(1);k2(1);k3(0)	press1 = press(2); if(press1 != -1)	k = press1;
	return k;
}
