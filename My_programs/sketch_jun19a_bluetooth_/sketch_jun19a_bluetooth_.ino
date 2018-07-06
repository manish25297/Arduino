void setup() {
  // put your setup code here, to run once:

pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int st=Serial.read();
if(st=="A")
{
  digitalWrite(13,1);
}
else if(st=="B")
{
  digitalWrite(13,0); 

}
}
