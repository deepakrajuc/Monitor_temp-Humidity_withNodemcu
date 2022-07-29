 // TECHATRONIC.COM  
 // DHT11 LIBRARY  
 // https://github.com/adafruit/DHT-sensor-library  
 #include "Adafruit_Sensor.h"
 #include "DHT.h"  
 DHT dht2(2,DHT11); 
  float t;
  float h;

 void setup()  
 {  
  Serial.begin(115200);
  t= dht2.readTemperature( );
  h= dht2.readHumidity();
 }  
 void loop()  
 {  
   Serial.println("Temperature in C:");  
   Serial.println(t);  
   Serial.println("Humidity in C:");  
   Serial.println(h);  
   delay(1000);  
 }  