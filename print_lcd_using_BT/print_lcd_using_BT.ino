#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
String st;

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
Serial.begin(9600);
}

void loop() {
 if(Serial.available()>0)
 {

  lcd.setCursor(0,0);
 lcd.clear();
 st=Serial.readString();
lcd.print(st);
Serial.println(st);

  
}
}
