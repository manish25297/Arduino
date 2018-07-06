/*

AUTHOR: Hazim Bitar (techbitar)
DATE: Aug 29, 2013
LICENSE: Public domain (use at your own risk)
CONTACT: techbitar at gmail dot com (techbitar.com)

*/
// NOTE: connect enable to (level printed on the bluetooth) generally 3.3v if we give enable 5v it will never go to "AT MODE"
//STEPS: 1. CONNECT RX,TX,GND,ENABLE 
         // 2. UPLOAD THE PROGRAM
         // 3. AFTER THE PROGRAM GET UPLOADED PRESS RESET BUTTTON ON BLUETOOTH(KEEP IT PRESSED DON'T RELEASE) 
         // 4. NOW GIVE 5V TO BLUETOOTH AND RELEASE THE RESET BUTTON
         // 5. YOUR BLUETOOTH WILL NOW BLINK WITH A DELAY OF 2 SECONDS ( THIS SIGNIFIES THE OUR BLUETOOTH IS IN AT MODE NOW) 

#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11); // RX | TX

void setup() 
{
  pinMode(9, OUTPUT);  // this pin will pull the HC-05 pin 34 (key pin) HIGH to switch module to AT mode
  digitalWrite(9, HIGH); 
  Serial.begin(9600);
  Serial.println("Enter AT commands:");
  BTSerial.begin(38400);  // HC-05 default speed in AT command more
}

void loop()
{

  // Keep reading from HC-05 and send to Arduino Serial Monitor
  if (BTSerial.available())
    Serial.write(BTSerial.read());

  // Keep reading from Arduino Serial Monitor and send to HC-05
  if (Serial.available())
    BTSerial.write(Serial.read());
}


