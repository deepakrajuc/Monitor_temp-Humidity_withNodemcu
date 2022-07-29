#include "Arduino.h"

#define sensor_pin A0
 int dataValue = 0;
void setup()
{
    pinMode(sensor_pin, INPUT);
    Serial.begin(115200);
}

void loop()
{
    dataValue = analogRead(sensor_pin);
    dataValue = map(dataValue, 0, 1024, 0,255);
    Serial.println("value of sensor");
    Serial.println(dataValue);
    delay(1000);
}