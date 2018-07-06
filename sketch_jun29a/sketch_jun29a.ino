#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available())
{
  delay(100);
  lcd.clear();
 while  (Serial.available() >0)
  {
    lcd.write(Serial.read());
  }
}

}
