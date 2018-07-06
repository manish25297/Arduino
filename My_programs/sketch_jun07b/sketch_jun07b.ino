void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
}
 void blink( int n)
 {
   for(int i=0;i<n;i++)
  {
digitalWrite(2,1);
digitalWrite(3,1);
digitalWrite(4,1);
digitalWrite(5,1);
delay(500);
digitalWrite(2,0);
digitalWrite(3,0);
digitalWrite(4,0);
digitalWrite(5,0);
delay(500);
  }
  while(1);
 }
void loop() {
  // put your main code here, to run repeatedly:
 

blink(5);
}
