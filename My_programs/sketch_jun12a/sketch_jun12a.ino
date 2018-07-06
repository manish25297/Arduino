#include<LiquidCrystal.h>   //take a temperature using lm35 and display on lcd 
                              //lm35 has 3 pins vcc,gnd and vout
LiquidCrystal lcd(7,6,5,4,3,2);  // take vout as analog input

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);

}

void loop() {
  // put your main code here, to run repeatedly:
int n=analogRead(A0);
int a=analogRead(A1);
lcd.setCursor(0,0);
lcd.print((n/2)-1);
delay(500);
lcd.setCursor(2,1);
lcd.print(a);
delay(500);
}
