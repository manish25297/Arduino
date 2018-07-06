int  DATA=6;
int  LATCH=8;
int  CLOCK=10;
int digits[] = {252, 96, 218, 242, 102, 182, 190, 224, 254, 246, 238, 62, 156, 
122, 158, 142};


void setup() {
  // put your setup code here, to run once:
pinMode(LATCH, OUTPUT);
   pinMode(CLOCK, OUTPUT);
   pinMode(DATA, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int i;
for( int n=0;n<100;n++)
{ int left, right=0;
  if (n < 10)
  {
    digitalWrite(LATCH, LOW);
    shiftOut(DATA, CLOCK, LSBFIRST, digits[n]);
    shiftOut(DATA, CLOCK, LSBFIRST,0);  
    digitalWrite(LATCH, HIGH);
  }
  else if (n >= 10)
  {     right = n % 10; // remainder of dividing the number to display by 10
    left = n / 10;  // quotient of dividing the number to display by 10
    digitalWrite(LATCH, LOW);
    shiftOut(DATA, CLOCK, LSBFIRST, digits[right]);
    shiftOut(DATA, CLOCK, LSBFIRST, digits[left]);    
    digitalWrite(LATCH, HIGH);
  }
  delay(500);
}
}
