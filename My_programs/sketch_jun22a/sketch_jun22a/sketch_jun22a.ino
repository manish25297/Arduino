int setpoint=0;
int temp=0;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(13,OUTPUT);


}

int stpnt()
{ int a;
  if(Serial.available()>0)
  {
     a =Serial.parseInt();
   
  }
 setpoint=a;
 return setpoint;
}

void loop() {
  // put your main code here, to run repeatedly:
int a= analogRead(A0);
temp= a/2.074;
setpoint= stpnt();
if(temp<setpoint)
{
  digitalWrite(13,1);
  delay(50);
}
else if(temp >= setpoint)
{
  digitalWrite(13,0);
  delay(50);
  
}
}
