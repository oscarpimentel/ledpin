/*
*/
#ifndef Ledpin_h
#define Ledpin_h

#include "Arduino.h"

#define SHORT_DELAY 50
#define LONG_DELAY 500
#define PULSES 1

//############################################################

class Ledpin
{
	public:
		Ledpin(int _pin);
		Ledpin(void); // empty constructor
		
		void set_state(int state);
		void high();
		void low();
		void pulse(int pulses=PULSES, int on_delay=SHORT_DELAY, int off_delay=LONG_DELAY);
	private:
		int pin;
};

#endif