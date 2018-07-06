#include <LiquidCrystal.h>
LiquidCrystal lcd(9, 10,11, 12, 13, 5);
int p=0,n=0,a[6];
int d[]={7,7,7,7,7,7};

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
  lcd.setCursor(0,0);
  lcd.print("enter password");
  delay(2000);
  lcd.clear();
 
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
  n=1;
   // lcd.clear();
    lcd.print(1);
    p++;
    delay(500);
    }
    else if(colm2 == LOW)
    {
      p++;
 //    lcd.clear();
   n=2;
    lcd.print(2);
    delay(500);
    }
    else if(colm3 == LOW)
    {
      p++;
  //  lcd.clear();
   n=3;
    lcd.print(3);
    delay(500);
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
      p++;
   // lcd.clear();
    n=4;
    lcd.print(4);
    delay(500);
     
    }
    
    else if(colm2 == LOW)
    {
      p++;
  // lcd.clear();
  n=5;
    lcd.print(5);
    delay(500);
    }
    else if(colm3 == LOW)
    {
      p++;
      n=6;
  //    lcd.clear();
   
    lcd.print(6);
    delay(500);
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
  //  lcd.clear();
  p++;
  n=7;
  
    lcd.print(7);
    delay(500);
     
    }
    
    else if(colm2 == LOW)
    {
  // lcd.clear();
  p++;
  n=8;
    lcd.print(8);
    delay(500);
    }
    else if(colm3 == LOW)
    {
   //   lcd.clear();
   p++;
   n=9;
    lcd.print(9);
    delay(500);
    }}

     void takevalue()
     {
       loop1();
      loop2();
      loop3();
      a[p-1]=n;
     }
    
      void loop()
    { int j=1;
      if(p<6)
      { takevalue();
      }

      if(p==6)
        {   
            lcd.setCursor(0,0);
    
            for(int i=0;i<6;i++)
             {
               if(a[i]!=d[i])
               j=0;
             }
          
            if (j==0){
            lcd.print("locked");
            delay(2000);
             lcd.setCursor(0,0);
            lcd.print(" try again");
            delay(2000);
            lcd.clear();
            p=0;
            }

            
            else if(j==1)
            {
            lcd.print("unlocked");
            delay(2000);
            lcd.clear();
            lcd.print("welcome ");
            delay(1000);
            j=3;
            }
            
           
            
           }
        
       }
    
    
    

