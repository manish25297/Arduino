
int trigger1=2;
int trigger2=3;
int echo1=4;
int echo2=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigger1,OUTPUT);
  pinMode(trigger2,OUTPUT);
  pinMode(echo1,INPUT);
  pinMode(echo2,INPUT);
pinMode(13,OUTPUT);
Serial.begin(9600);
}
int ultrasonic1()
{
  digitalWrite(trigger1,1);
  delayMicroseconds(10);
  digitalWrite(trigger1,0);
  int d=pulseIn(echo1,HIGH);
  Serial.println("distance1 =");
  int distance= d*0.034/2;
  Serial.print(distance);
  return distance;
}
int ultrasonic2()
{
  digitalWrite(trigger2,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger2,0);
 
  int a = pulseIn(echo2,1);
  Serial.println(" distance2 = ");
  int distance= a*0.034/2;
  Serial.println(distance);
  return distance;
}

void loop() {
  // put your main code here, to run repeatedly:
int d1,d2;
d1= ultrasonic1();
Serial.println();
Serial.println();
d2=ultrasonic2();

delay(2000);
digitalWrite(13,0);
if(d1<10 || d2< 10)
{
  digitalWrite(13,1);
  delay(50);
}

}
