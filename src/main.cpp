/*
  Arduino_PCF8591_Write_Analog_Value_I2C

  Developed by: Walid Amriou
  Last update: October 2020

 */
#include "Arduino.h"
#include "PCF8591.h"

#define PCF8591_I2C_ADDRESS 0x48

PCF8591 pcf8591(PCF8591_I2C_ADDRESS);
float voltage_valure=3.3;
float buffer_voltge_read;

void setup(){
	Serial.begin(115200);
	pcf8591.begin();
}

void loop(){
  pcf8591.voltageWrite(voltage_valure); 
  if ( Serial.available() !=0 ){
    buffer_voltge_read = Serial.parseFloat();
    if(buffer_voltge_read!=0.0){
      voltage_valure = buffer_voltge_read;
    }
  }
  delay(1);    
}

 