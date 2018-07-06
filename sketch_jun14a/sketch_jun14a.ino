const int triggerpin=2;
const int echopin=3;
void setup() {
  // put your setup code here, to run once:
pinMode(triggerpin,OUTPUT);
pinMode(echopin,INPUT);
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(triggerpin,1);
delayMicroseconds(10);
digitalWrite(triggerpin,0);
int duration=pulseIn(echopin,1);
int d=(duration/2)/29.1;
Serial.println(d);
delay(500);
}
