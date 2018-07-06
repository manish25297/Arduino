#include<LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);
int c0=8,c1=9,c2=10,c3,
r0=11,r1=12,r2=A0,r3=A1;
//int rows=4;

//int columns=4;
int count=0;
char readkey(void);
char nfunc(void);
//#define c3 9
//#define c2 8
//#define c1 7
//#define c0 6
//#define r3 5
//#define r2 4
//#define r1 3
//#define r0 2
char password[5]="1234";
char typed[5];

void setup() {
  //Serial.begin(9600);
  lcd.begin(16,2);
 pinMode(c0,INPUT_PULLUP); 
 pinMode(c1,INPUT_PULLUP);
 pinMode(c2,INPUT_PULLUP);
 pinMode(c3,INPUT_PULLUP);
 pinMode(r0,OUTPUT);
 pinMode(r1,OUTPUT);
 pinMode(r2,OUTPUT);
 pinMode(r3,OUTPUT);
// pinMode(11,OUTPUT);
 //pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
}
char readkey(void)
{digitalWrite(r0,LOW);
digitalWrite(r1,HIGH);
digitalWrite(r2,HIGH);
digitalWrite(r3,HIGH);
if(digitalRead(c0)==LOW){delay(500);
return '1';}
else if(digitalRead(c1)==LOW){delay(500);
return '2';}
else if(digitalRead(c2)==LOW){delay(500);
return '3';}
else if(digitalRead(c3)==LOW){delay(500);
return 'A';}

digitalWrite(r0,HIGH);
digitalWrite(r1,LOW);
digitalWrite(r2,HIGH);
digitalWrite(r3,HIGH);
if(digitalRead(c0)==LOW){delay(500);
return '4';}
else if(digitalRead(c1)==LOW){delay(500);
return '5';}
else if(digitalRead(c2)==LOW){delay(500);
 return '6';}
else if(digitalRead(c3)==LOW){delay(500);
return 'B';}

digitalWrite(r0,HIGH);
digitalWrite(r1,HIGH);
digitalWrite(r2,LOW);
digitalWrite(r3,HIGH);
if(digitalRead(c0)==LOW){delay(500);
return '7';}
else if(digitalRead(c1)==LOW){delay(500);
return '8';}
else if (digitalRead(c2)==LOW){delay(500);
return '9';}
else if(digitalRead(c3)==LOW){delay(500);
return 'C';}

digitalWrite(r0,HIGH);
digitalWrite(r1,HIGH);
digitalWrite(r2,HIGH);
digitalWrite(r3,LOW);
if(digitalRead(c0)==LOW){delay(500);
return '*';}
else if(digitalRead(c1)==LOW){delay(500);
return '0';}
else if(digitalRead(c2)==LOW){delay(500);
return '#';}
else if(digitalRead(c3)==LOW){delay(500);
return 'D';}
return 'o';
}

char nfunc(void)
{
  char key='o';
  while(key=='o')
  key=readkey();
return key;
}

void loop()
{
char key1= nfunc();

if(key1){
typed[count]=key1;
  count++;
  Serial.print(key1);

}
if(count==4){
if(strcmp(typed,password)==0)
{
  //Serial.println(" correct");
  lcd.clear();
 lcd.print("correct");
 //digitalWrite(11,HIGH);
 // digitalWrite(12,LOW);
  delay(250);
  //digitalWrite(11,LOW);
  digitalWrite(13,1);
}
else{
  //Serial.println(" intruder");
  lcd.clear();
  lcd.print("wrong");
  delay(250);
  digitalWrite(13,0);
}
count=0;
}}
