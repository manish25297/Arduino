#include<EEPROM.h>


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
int n= Serial.read();
Serial.println(n);
if( n=='1')
{
  digitalWrite(13,HIGH);delay(500);
  EEPROM.write(0,1);Serial.println(" led is on!");
}
else if(n=='0')
{digitalWrite(13,LOW);
delay(500);EEPROM.write(0,0);Serial.println("led is off!");
}
else if (EEPROM.read(0)==1)
{digitalWrite(13,1);
Serial.println("led is on!");}
else if(EEPROM.read(0)==0){
digitalWrite(13,0);Serial.println("led is off!");
}
}

