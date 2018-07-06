#include<EEPROM.h>
int b;
void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);
Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
int a = digitalRead(3);
int c= digitalRead(4);
b=EEPROM.read(0);
Serial.println(b);
if(a==1)
{
  digitalWrite(2,1);
  EEPROM.write(0,1);
}
if(b==1)
{
  digitalWrite(2,1);
}
if(b==0)
{
  digitalWrite(2,0);
}
if(c==1)
{
  digitalWrite(2,0);
 EEPROM.write(0,0);}
}

