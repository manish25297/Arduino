#include<LiquidCrystal.h>
LiquidCrystal lcd(10,8,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0,j=7;i<=8,j>=0;i++,j--)
{lcd.clear();
  lcd.setCursor(i,0);
 lcd.print("KAUSHAL SINGH");
 lcd.setCursor(j,1);
lcd.print("CHAUHAN");
delay(1000);
}


}
