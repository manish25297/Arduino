int DATA =6;
int LATCH=8;
int CLOCK=10;
int left,right;
int digits[] = {252, 96, 218, 242, 102, 182, 190, 224, 254, 246, 238, 62, 156, 
122, 158, 142};

void setup() {
  // put your setup code here, to run once:
pinMode(LATCH,OUTPUT);
pinMode(CLOCK,OUTPUT);
pinMode(DATA,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
/*digitalWrite(LATCH,0);
shiftOut(DATA,CLOCK,LSBFIRST,224);
shiftOut(DATA,CLOCK,LSBFIRST,224);
digitalWrite(LATCH,HIGH);
delay(250);}*/
for(int i=10;i<100;i++)
{
 right = i % 10; // remainder of dividing the number to display by 10
    left = i / 10;  // quotient of dividing the number to display by 10
    digitalWrite(LATCH, LOW);
    shiftOut(DATA, CLOCK, LSBFIRST, digits[left]);
    shiftOut(DATA, CLOCK, LSBFIRST, digits[right]);    
    digitalWrite(LATCH, HIGH);
    delay(300);
}}
