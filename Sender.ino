/* Sender for I2C Protocol 
 * Sherwin Chiu 
 * Nov 19th, 2019
 */

#include <Wire.h> // built in Arduino library
int data[] = {232, 25, 63, 162, 25};

void setup() {
  Serial.begin(9600);
  Wire.begin();
}

void loop() {
  for(int address = 0; address < 5; address++){
    Wire.beginTransmission(address);   
    Wire.write(data[address]);     // send data to other Arduinos
    Wire.endTransmission();  // stop transmitting
    Serial.println(data[address]); // display on Serial Monitor
    delay(1000);  // wait one second so friends can read it 
  } 
}
