
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
int temp1()
{
  int a=analogRead(A0);
  int temp=a/2.074;
  return temp1;
}
int temp2()
{
  int b=analogRead(A1);
  int temp=b/2.074;
  return temp2;
}
int temp3()
{
   int c=analogRead(A2);
  int temp=c/2.074;
  return temp3;
}
void loop() {
  // put your main code here, to run repeatedly:
int button1=temp1();
int button2=temp2();
int button3=temp3();

if (button1>30)
{
  digitalWrite(13,1);
}
else if(button2>40)
{
  digitalWrite(12,1);
}
else if(button3>50)
{
  digitalWrite(11,1);
  delay(500);
  digitalWrite(11,0);
  delay(500);
}
}

