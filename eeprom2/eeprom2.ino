#include<EEPROM.h>
int k=0,buttonstate;

void setup() 
{
  pinMode(12,INPUT);
pinMode(13,OUTPUT);
   k=EEPROM.read(0);
if(k==1)
{
  digitalWrite(13,1);
  EEPROM.write(0,1);
  }
  else if(k==0)
  {
    digitalWrite(13,0);
    EEPROM.write(0,0);
    }
}

void loop() {
   int buttonstate=digitalRead(12);
   if (buttonstate==1)
   {
    digitalWrite(13,1);
    EEPROM.write(0,1);
    }
else if(buttonstate==0)
{
digitalWrite(13,0);
EEPROM.write(0,0);
    }

}
