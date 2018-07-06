#include<LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
String i;
void setup()
{
  lcd.begin(16, 2);
  Serial.begin(9600);
}
void loop()
{
  i = Serial.readString();
  if (i == "440019B36F81")
  {
    lcd.setCursor(0,0);
    lcd.print("HELLO NALIN");
    Serial.println("HELLO NALIN");
    delay(10);
  }
  if (i == "45003C296030")
  {
    lcd.setCursor(0,0);
    lcd.print("HELLO LOKESH");
    Serial.println("HELLO LOKESH");
    delay(10);
  }
  if (i == "45003BE260FC")
  {
    lcd.setCursor(0,0);
    lcd.print("HELLO MOHIT");
    Serial.println("HELLO MOHIT");
    delay(10);
  }
}

