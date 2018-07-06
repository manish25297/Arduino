#include<LiquidCrystal.h>  //connect ir sensor and display count on lcd screen
LiquidCrystal lcd(9,8,7,6,5,4);
int count=0,pb=0,pc=0;
void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);
pinMode(3,INPUT);
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
int b=digitalRead(2);
if(b!=pb)
{if(b==0)
count++;
pb=b;
lcd.clear();
lcd.setCursor(0,0);
lcd.print(count);
}
int c=digitalRead(3);
if(c!=pc)
{if(c==0)
count--;
pc=c;
lcd.clear();
lcd.setCursor(0,0);
lcd.print(count);
}
}
