//MAKING THE MOVEMENT OF THE SERVO ACCORDING TO THE TEMPERATURE AND THEREBY MAKING A ANALOG TEMPERATURE METER

#include<Servo.h>
Servo servo;
int l=0;
int a=A0;
int b=0;
void setup() {
servo.attach(5);
Serial.begin(9600);
pinMode(A0,INPUT);
}

void loop() 
{
 l=analogRead(A0);
 b=l/2;
Serial.println(b);
delay(500);
  servo.write(b);
  delay(500);
  Serial.print("servo angle=");
 Serial.println(b)

;}

