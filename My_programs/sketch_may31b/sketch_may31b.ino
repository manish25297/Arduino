const int a=4;
const int b=5;
const int c=6;
const int d=7;
const int button=2;
const int button1=3;
int buttonstate=0;
void setup() {
  // put your setup code here, to run once:
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(button,INPUT);
pinMode(button1,INPUT);
}
void glow()
{
digitalWrite(a,HIGH);
delay(1000);
digitalWrite(b,HIGH);
delay(1000);
digitalWrite(c,HIGH);
delay(1000);
digitalWrite(d,HIGH);
delay(1000);
}
  void dark()
 {
  digitalWrite(a,LOW);
  delay(1000);
  digitalWrite(b,LOW);
  delay(1000);
  digitalWrite(c,LOW);
  delay(1000);
  digitalWrite(d,LOW);
  delay(1000);
 }
void loop() {
  // put your main code here, to run repeatedly:
buttonstate=digitalRead(button);
buttonstate=digitalRead(button1);
if (buttonstate==1)
{
  glow();
}
else if(buttonstate==0)
{
  dark();
}
}

