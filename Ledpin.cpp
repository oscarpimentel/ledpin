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

void Ledpin::begin(){
	pinMode(pin, OUTPUT);
	pulse();
}

//############################################################

void Ledpin::set_state(int state){
	digitalWrite(pin, state);
}

void Ledpin::high(){
	set_state(HIGH);
}

void Ledpin::low(){
	set_state(LOW);
}

void Ledpin::pulse(int pulses=PULSES, int on_delay=ON_DELAY, int off_delay=OFF_DELAY){
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