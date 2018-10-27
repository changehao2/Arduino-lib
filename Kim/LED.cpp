#include "LED.h"
#include "Arduino.h"
//Ver0.1
/*
void ledPin(int pin)
{
  pinMode(pin, OUTPUT);
}
void ledStatus(int pin, int turn, int lay)
{
	digitalWrite(pin, turn);
	delay(lay);
}
*/

Want::Want(uint8_t pin)
{
	pinMode(pin, OUTPUT);
	_pin = pin;
}
void Want:: turnOn(uint32_t times)
{
	digitalWrite(_pin, 1); // ERROR when u write  "HIGH"
	delay(times);
}
void Want:: turnOff(uint32_t times)
{
	digitalWrite(_pin, 0);
	delay(times);
}