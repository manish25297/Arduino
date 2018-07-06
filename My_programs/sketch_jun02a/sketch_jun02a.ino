const int button=5;
const int button1=4;
int buttonstate=0;
int buttonstate1=0;
void setup() {
  // put your setup code here, to run once:
pinMode(button,INPUT);
pinMode(button1,INPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonstate=digitalRead(button);
  buttonstate=digitalRead(button1);
  if(buttonstate==0&&buttonstate1==0)
  {
    digitalWrite(6,LOW);
    digitalWrite(7,0);
    digitalWrite(8,1);
    digitalWrite(9,1);
  }
else if(buttonstate==1&&buttonstate1==1)
{
  digitalWrite(6,HIGH);
  digitalWrite(7,1);
  digitalWrite(8,0);
  digitalWrite(9,0);
}
}
