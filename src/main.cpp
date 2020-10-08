/*
  Arduino_PCF8591_Write_Analog_Value_I2C

   Developed by: Walid Amriou
   Last update: October 2020

 */
#include "Arduino.h"

#include "PCF8591.h"
#define PCF8591_I2C_ADDRESS 0x48

PCF8591 pcf8591(PCF8591_I2C_ADDRESS);
float volatge_valure=3.3;
boolean done = 0;


void setup()
{
	Serial.begin(115200);
	pcf8591.begin();
  Serial.setTimeout(1000);
  //pcf8591.voltageWrite(volatge_valure); // 2.7Volts output
}

void loop()
{
    pcf8591.voltageWrite(volatge_valure); 
  //if (done == 0){
  if ( Serial.available() !=0 ){
     volatge_valure = Serial.parseFloat();
     //stream.flush()
     Serial.print(volatge_valure);
     //done = 1;    //delay(3000);
  }
  //}

}

 