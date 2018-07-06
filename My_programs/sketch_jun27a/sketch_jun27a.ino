#include<LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);
char a[6][100]; int i=0,j=0; char b;




void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
lcd.begin(16,2);
lcd.print("welcome!");
Serial.print("enter lines to be print on lcd");
Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:
while( Serial.available()>0)
 {   a[1][j]=Serial.read();
 

 if(a[1][j]=='#')
 { lcd.clear();lcd.setCursor(16,1);
while(i<=j)
{ 
  lcd.print(a[1][i]);
  lcd.autoscroll();delay(200);
  i++;
}}
 j++;
 }

/*if ( a[i-1][j]=="command")
{ Serial.print("you entered in command mode");
  if(Serial.available()>0)
  {
    b= Serial.read(); 
    Serial.write(b);
    Serial.println();
  
 switch(b)
{
  case 'c' :Serial.print("clear");lcd.clear();
                  break;
  case 'p':  Serial.print("print");  
            for(int j=0;j<6;j++)
            {
             lcd.write(a[j]);               
            }
               break;  
  
}
  }*/
}

