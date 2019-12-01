/* Reader for I2C Protocol 
 * Sherwin Chiu 
 * Nov 19th, 2019
 */
 
#include <Wire.h> // built in Arduino library
int address = 0;
int data;

void setup(){
  Serial.begin(9600);
  Wire.begin();
}
void loop(){
  Wire.requestFrom(address, 1);      
  while (!Wire.available()){};  // keep checking if avaliable       
  data = Wire.read();           // read data        
  Serial.println(data);         // display on Serial Monitor
  delay(100);                   // pause reading time
}
