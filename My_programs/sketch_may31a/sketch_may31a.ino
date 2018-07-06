const int led=4;
const int button=5;
int buttonstate=0;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(button,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonstate=digitalRead(button);
if (buttonstate==0)
{
  digitalWrite(led,LOW);
}
else if(buttonstate==1)
{
  digitalWrite(led,HIGH);
}
}
