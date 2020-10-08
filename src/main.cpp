/*
  Arduino_PCF8591_Write_Analog_Value_I2C

   Developed by: Walid Amriou
   Last update: October 2020

 */
#include "Arduino.h"
#include "PCF8591.h"
#define PCF8591_I2C_ADDRESS 0x48

PCF8591 pcf8591(PCF8591_I2C_ADDRESS);
float volatge_valure=2.7;

void setup()
{
	Serial.begin(115200);
	pcf8591.begin();
}

void loop()
{
  if (Serial.available() > 0) {
    // read the incoming byte:
    volatge_valure = Serial.read();
  }
	pcf8591.voltageWrite(volatge_valure); // 2.7Volts output
	//delay(20);
}

 