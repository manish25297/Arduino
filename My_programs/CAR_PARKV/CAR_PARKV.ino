#include<LiquidCrystal.h>
int count=0,pb=0,pc=0;
LiquidCrystal lcd(9,8,7,6,5,4);
void setup() {
 pinMode(2,INPUT);
  pinMode(3,INPUT);
  lcd.begin(16,2);
}

void loop()
{
    int b=digitalRead(2);
    if(b!=pb)
    {
    if(b==0)
    count++;
pb=b;
lcd.clear();
lcd.setCursor(0,0);
lcd.print(count);
    }


int c=digitalRead(3);
if(c!=pc)
{
if(c==0)
count--;
pc=c;
pb=b;
lcd.clear();
lcd.setCursor(0,0);
lcd.print(count);
}
}
