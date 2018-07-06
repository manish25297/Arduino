#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
int r1=11;
int r2=12;
int r3=13;
int c1=8;
int c2=9;
int c3=10;
char col1;
char col2;
char col3;
void setup() {
  // put your setup code here, to run once:
pinMode(r1,OUTPUT);
pinMode(r2,OUTPUT);
pinMode(r3,OUTPUT);
pinMode(c1,INPUT);
pinMode(c2,INPUT);
pinMode(c3,INPUT);
digitalWrite(c1,1);
digitalWrite(c2,1);
digitalWrite(c3,1);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(r1,0);
digitalWrite(2,1);
digitalWrite(r3,1);
col1=digitalRead(c1);
col2=digitalRead(c2);
col3=digitalRead(c3);
if(col1==0)
{
lcd.setCursor(0,0);
lcd.print(1);
}
else if(col2==0)
{
  lcd.setCursor(0,0);
  lcd.print(2);
}
else if(col3==0)
{
  lcd.setCursor(0,0);
  lcd.print(3);
} 

digitalWrite(r1,1);
digitalWrite(r1,0);
digitalWrite(r1,1);
col1=digitalRead(c1);
col1=digitalRead(c2);
col1=digitalRead(c3);
if(col1==0)
{
lcd.setCursor(0,0);
lcd.print(4);
}
else if(col2==0)
{
  lcd.setCursor(0,0);
  lcd.print(5);
}
else if(col3==0)
{
  lcd.setCursor(0,0);
  lcd.print(6);
}
}
