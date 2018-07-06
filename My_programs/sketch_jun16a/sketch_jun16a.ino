void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);  //using Serial.read() function
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   char st;
  
 st=Serial.read();
if(st=='A')
{
  digitalWrite(2,1);
  
}
else if(st=='B')
{
  digitalWrite(3,1); 
  
}
else if(st=='C')
{
  digitalWrite(4,1); 
  
}
else if(st=='D')
{
  digitalWrite(5,1); 
  
}
}
