void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int a;
int b;
a=digitalRead(2);
b=digitalRead(3);
if(a==1&&b==1)
{
  digitalWrite(4,1);
  digitalWrite(5,0);
  digitalWrite(6,1);
  digitalWrite(7,0);
  digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(10,1);
  digitalWrite(11,0);
}
else if(a==0&&b==0)
{
  digitalWrite(4,0);
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(7,1);
  digitalWrite(8,0);
  digitalWrite(9,1);
  digitalWrite(10,0);
  digitalWrite(11,1);
}
else if(a==0&&b==1)
{
  digitalWrite(4,1);
  digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(7,1);
}
else if(a==1&&b==0)
{
  digitalWrite(8,1);
  digitalWrite(9,1);
  digitalWrite(10,1);
  digitalWrite(11,1);
}
}
