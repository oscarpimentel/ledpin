/*
*/
#include "Arduino.h"
#include "Ledpin.h"

//############################################################

Ledpin::Ledpin(int _pin){
	pin = _pin;
}

Ledpin::Ledpin(void){}

//############################################################

void Ledpin::set_state(int state){
	pinMode(pin, OUTPUT);
	digitalWrite(pin, state);
}

void Ledpin::high(){
	set_state(HIGH);
}

void Ledpin::low(){
	set_state(LOW);
}

void Ledpin::pulse(int pulses=PULSES, int on_delay=SHORT_DELAY, int off_delay=LONG_DELAY){
	if(pulses>0){
		low();
		for(int i=0; i<pulses; i++){
			high();
			delay(on_delay);
			low();
			delay(off_delay);
		}
		low();
	}
}