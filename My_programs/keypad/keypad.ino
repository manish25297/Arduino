#include <LiquidCrystal.h>
LiquidCrystal lcd(9, 10,11, 12, 13, 5);

int r1 = 2;
int r2 = 3;
int r3 = 4;

int c1 = 6;
int c2 = 7;
int c3 = 8;
int colm1;
int  colm2;
int  colm3;


void setup()
{
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(r3,OUTPUT);

  pinMode(c1,INPUT);
  pinMode(c2,INPUT);
  pinMode(c3,INPUT);
  digitalWrite(c1,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(c3,HIGH);
  lcd.begin(16,2);
  lcd.setCursor(1,0);
}
void loop1()
{
  digitalWrite(r1,LOW);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  
  colm1 = digitalRead(c1);
  colm2 = digitalRead(c2);
  colm3 = digitalRead(c3);

    if (colm1 == 0)
    { 
    lcd.setCursor(0,0); 
    lcd.clear();
    lcd.print(1);
    delay(200);
    }
    else if(colm2 == LOW)
    {
     lcd.clear();
    lcd.print(2);
    delay(200);
    }
    else if(colm3 == LOW)
    {
      
    lcd.clear();
    lcd.print(3);
    delay(200);
    }}
    void loop2()
    {
  digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(r3,HIGH);
  //digitalWrite(r4,HIGH);
  colm1 = digitalRead(c1);
  colm2 = digitalRead(c2);
  colm3 = digitalRead(c3);
  
    if (colm1 == LOW)
    {  
    lcd.clear();
    lcd.print(4);
    delay(200);
     
    }
    
    else if(colm2 == LOW)
    {
   lcd.clear();
    lcd.print(5);
    delay(200);
    }
    else if(colm3 == LOW)
    {
      lcd.clear();
    lcd.print(6);
    delay(200);
    }}
    void loop3()
    {
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,LOW);
  
  colm1 = digitalRead(c1);
  colm2 = digitalRead(c2);
  colm3 = digitalRead(c3);
  
    if (colm1 == LOW)
    {  
    lcd.clear();
    lcd.print(7);
    delay(200);
     
    }
    
    else if(colm2 == LOW)
    {
   lcd.clear();
    lcd.print(8);
    delay(200);
    }
    else if(colm3 == LOW)
    {
      lcd.clear();
    lcd.print(9);
    delay(200);
    }}
 
    
      void loop()
      {
       loop1();
      loop2();
      loop3();
    
      }
    

