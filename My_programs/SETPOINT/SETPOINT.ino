int rows=4;
int columns=4;
int setpoint=0;
 int count=0;

char readkey(void);
char nfunc(void);
#define c3 9
#define c2 8
#define c1 7
#define c0 6
#define r3 5
#define r2 4
#define r1 3
#define r0 2
char password[5]="1234";
char typed[5];

void setup() {
  Serial.begin(9600);
 pinMode(c0,INPUT_PULLUP); 
 pinMode(c1,INPUT_PULLUP);
 pinMode(c2,INPUT_PULLUP);
 pinMode(c3,INPUT_PULLUP);
 pinMode(r0,OUTPUT);
 pinMode(r1,OUTPUT);
 pinMode(r2,OUTPUT);
 pinMode(r3,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(12,OUTPUT);
Serial.println("enter setpoint");
delay(500);
}
char readkey(void)
{digitalWrite(r0,LOW);
digitalWrite(r1,HIGH);
digitalWrite(r2,HIGH);
digitalWrite(r3,HIGH);
if(digitalRead(c0)==LOW){delay(500);
return 1;}
else if(digitalRead(c1)==LOW){delay(500);
return 2;}
else if(digitalRead(c2)==LOW){delay(500);
return 3;}
else if(digitalRead(c3)==LOW){delay(500);
return 'A';}

digitalWrite(r0,HIGH);
digitalWrite(r1,LOW);
digitalWrite(r2,HIGH);
digitalWrite(r3,HIGH);
if(digitalRead(c0)==LOW){delay(500);
return 4;}
else if(digitalRead(c1)==LOW){delay(500);
return 5;}
else if(digitalRead(c2)==LOW){delay(500);
 return 6;}
else if(digitalRead(c3)==LOW){delay(500);
return 'B';}

digitalWrite(r0,HIGH);
digitalWrite(r1,HIGH);
digitalWrite(r2,LOW);
digitalWrite(r3,HIGH);
if(digitalRead(c0)==LOW){delay(500);
return 7;}
else if(digitalRead(c1)==LOW){delay(500);
return 8;}
else if (digitalRead(c2)==LOW){delay(500);
return 9;}
else if(digitalRead(c3)==LOW){delay(500);
return 'C';}

digitalWrite(r0,HIGH);
digitalWrite(r1,HIGH);
digitalWrite(r2,HIGH);
digitalWrite(r3,LOW);
if(digitalRead(c0)==LOW){delay(500);
return '*';}
else if(digitalRead(c1)==LOW){delay(500);
return 0;}
else if(digitalRead(c2)==LOW){delay(500);
return '#';}
else if(digitalRead(c3)==LOW){delay(500);
return 'D';}
return 'o';
}

char nfunc(void)
{
  int key='o';
  while(key=='o')
  key=readkey();
return key;
}

void loop()
{
  while(count<2)                               //to get two digit setpoint (since we are gettting a single digit at once)
 {int key1= nfunc();                            // calling of function "nfun()" to get a single digit integer
 setpoint = 10* setpoint+ key1;                // to save the set point into an integer
 count++;}
 Serial.println();
Serial.print(" setpoint- ");
Serial.print(setpoint);
 
 int n=analogRead(A0);                          //reading temperature
 int temp=(n/2)-1;                              //
 Serial.print("          temperature- ");       //   
 Serial.print(temp);                            //displaying temperature on serial monitor

 
 
 if(temp < setpoint)                            //comparing setpoint and temperature
 {digitalWrite(11,1);
 digitalWrite(12,0);}
 
 else if (temp>=setpoint)
 {digitalWrite(11,0);
 digitalWrite(12,1);
 }
delay(1000);

}


