
int s1=A0,s2=A1,s3=A2;
int temp1=0,temp2=0,temp3=0;
int p1,p2,p3;
int st1,st2,st3;
int on=11,off=12,blink=13;

void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
   digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
 }
int sensor1()
{
    Serial.print("sensor1= ");
    Serial.println(p1);
      
    delay(200);
  temp1=analogRead(A0);
  st1=temp1/2;
  return st1;
}
int sensor2()
{
   Serial.print("sensor2= ");
    Serial.println(p2);
      
    delay(200);
  temp2=analogRead(A1);
  st2=temp2/2;
  return st2;
}
int sensor3()
{
   Serial.print("sensor3= ");
    Serial.println(p3);
      
    delay(200);
  temp3=analogRead(A2);
  st3=temp3/2;
  return st3;
}
void loop() {
  p1=sensor1();
  p2=sensor2();
  p3=sensor3();
 
   if(p1>40)
   {
    digitalWrite(11,HIGH);
    Serial.print("sensor1= ");
    Serial.println(p1);
      
    delay(200);

   }
  
   if(p2>40)
   {
    digitalWrite(12,LOW);
     Serial.print("sensor2= ");
    Serial.println(p2);
      
    
   
    delay(200);
   }
   if(p3>40)
   {
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);
     Serial.print("sensor3= ");
    Serial.println(p3);
      

   
    delay(200);
    
   }
 }
