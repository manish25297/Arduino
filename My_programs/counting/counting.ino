#include<LiquidCrystal.h>
LiquidCrystal lcd(8,7,6,5,4,3);
int pb=0;
int count=0;
void setup() {
  pinMode(2,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  int b=digitalRead(2);
  if(b!=pb)
  {
    count++;
    pb=b;
    lcd.setCursor(0,0);
    lcd.print(count);
  }
  // put your main code here, to run repeatedly:

}
