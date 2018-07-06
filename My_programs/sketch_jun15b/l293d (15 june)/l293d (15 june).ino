//l29d 
void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int a=digitalRead(4);
if(a==0)
{
  digitalWrite(2,0);
  digitalWrite(3,1);
}
else if(a==1)
{
  digitalWrite(2,1);
  digitalWrite(3,0);
}
}



