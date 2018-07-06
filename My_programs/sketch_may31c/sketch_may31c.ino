const int a=2;
const int b=3;
const int c=4;
const int d=5;
const int e=6;
const int f=7;
int buttonstate=0;
void setup() {
  // put your setup code here, to run once:
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,INPUT);
pinMode(e,INPUT);
pinMode(f,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonstate=digitalRead(d);
buttonstate=digitalRead(e);
buttonstate=digitalRead(f);
if (f==1)
{
digitalWrite(c,HIGH);
}
else if(e==1)
{
  digitalWrite(b,HIGH);
}
else(d==1);
{
  digitalWrite(a,HIGH);
  
}
}
