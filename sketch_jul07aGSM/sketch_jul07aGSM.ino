#include<SoftwareSerial.h>
#define SIM800_TX_PIN 5
#define SIM800_RX_PIN 4
SoftwareSerial serialSIM800(SIM800_TX_PIN,SIM800_RX_PIN);

void setup() {
  // put your setup code here, to run once:
serialSIM800.begin(9600);
  serialSIM800.write("AT+CMGF=1\r\n");
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  serialSIM800.write("AT+CMGS=\"+917296892508\"\r\n");/*enter mobile number here to message reciever & +91 is country code check what is yours */
  delay(1000); 
  //Send SMS content
serialSIM800.write("Bike started");
  delay(1000);
  serialSIM800.write((char)26);
  delay(1000);
 // delay(1000);
}
