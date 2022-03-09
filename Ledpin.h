/*
*/
#ifndef Ledpin_h
#define Ledpin_h

#include "Arduino.h"

#define ON_DELAY 50
#define OFF_DELAY 100
#define PULSES 1

//############################################################

class Ledpin
{
	public:
		Ledpin(int _pin);
		Ledpin(void); // empty constructor
		void begin();
		void set_state(int state);
		void high();
		void low();
		void pulse(int pulses=PULSES, int on_delay=ON_DELAY, int off_delay=OFF_DELAY);
	private:
		int pin;
};

#endif