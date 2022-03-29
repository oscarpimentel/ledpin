#include <Ledpin.h>

#define BAUD_RATE 500000
#define LEDPIN 9

//############################################################

Ledpin ledpin(LEDPIN);

void setup(){
	Serial.begin(BAUD_RATE);
	ledpin.begin();
}

//############################################################

void loop(){
		ledpin.pulse(2, 100);
		delay(1000);
}