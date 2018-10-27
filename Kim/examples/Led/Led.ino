#include <LED.h>

Want LED13(13);
//#include "C:\Users\KimHao\Documents\Visual Studio 2015\Projects\LED_ARDUINO\LED_ARDUINO\LED.h"
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  LED13.turnOn(5000);
  LED13.turnOff(1000);
}
