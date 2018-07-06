#include<LiquidCrystal.h>
int count=0,pb=0;
  LiquidCrystal lcd(3,4,5,6,7,8);
void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int b=digitalRead(2);
  if(b!=pb)
  {
    count++;
    pb=b;
    lcd.setCursor(0,0);
    lcd.print(count/2);
    
    
  }
  
}
