#include<EEPROM.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(9,10,11,12,13,5);
void setup() {
  // put your setup code here, to run once:
int k;
k= EEPROM.read(0);
k++;
EEPROM.write(0,k);
lcd.print(k);
}

void loop() {
  // put your main code here, to run repeatedly:

}
