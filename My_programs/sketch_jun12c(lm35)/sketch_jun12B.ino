
void setup() {
  // put your setup code here, to run once
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int n=analogRead(A0);

Serial.println((n/2)-1);
delay(500);
/*if ((n/2)-1>35)
{
  digitalWrite(8,1);
  
  Serial.print("MOTOR ON");
  delay(500);
 
}
else
{
digitalWrite(8,0);


  Serial.print("MOTOR OFF");
  delay(500);
 
}*/
}
