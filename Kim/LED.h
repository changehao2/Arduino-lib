#pragma once
//Ver0.1
/* 
#ifndef LED_H
#define LED_H
#include "Arduino.h"
void ledPin(int);
void ledStatus(int ,int, int);
#endif
*/

//Ver0.2
#ifndef LED_H
#define LED_H
#include "Arduino.h"
class Want
{	
private:
	uint8_t _pin;
public:
	Want(uint8_t );
	void turnOn(uint32_t );
	void turnOff(uint32_t );
};
#endif