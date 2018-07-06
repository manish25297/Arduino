#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);

void setup() {
  // put your setup code here, to run once:
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a=digitalRead(8);
  lcd.setCursor(5,1);
  if(a==1)
  {
    digitalWrite(11,1);
    digitalWrite(12,0);
    digitalWrite(9,1);
    digitalWrite(10,0);
    lcd.print("FORWARD");
  }
  if(a==0)
  {
    digitalWrite(11,0);
    digitalWrite(12,1);
    digitalWrite(9,0);
    digitalWrite(10,1);
    lcd.print("REVERSE");
  }
}
