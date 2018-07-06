const int button=4;
int buttonstate=0;
void setup() {
  // put your setup code here, to run once:
pinMode(6,OUTPUT);
pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonstate=digitalRead(button);
  if (buttonstate==0)
  {
    digitalWrite(6,LOW);
    digitalWrite(6,LOW);
  }
  else if(buttonstate==1)
  {
    digitalWrite(6,HIGH);
    digitalWrite(6,HIGH);
  }
}
