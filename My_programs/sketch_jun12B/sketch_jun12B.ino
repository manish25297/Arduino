#include<LiquidCrystal.h>     //take temperature using lm35 and displau on lcd
LiquidCrystal lcd(7,6,5,4,3,2);  //and also turn on the motor on the motor when temp.crosses certain limits
 
void setup() {
  // put your setup code here, to run once
  pinMode(8,OUTPUT);
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
int n=analogRead(A0);
lcd.setCursor(0,0);
lcd.print((n/2)-1);
delay(500);
if ((n/2)-1>35)
{
  digitalWrite(8,1);
  lcd.setCursor(0,1);
  lcd.print("MOTOR ON");
  delay(500);
 
}
else
{
digitalWrite(8,0);

  lcd.setCursor(0,1);
  lcd.print("MOTOR OFF");
  delay(500);
 
}}
