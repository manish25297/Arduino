 int count=0, Pb=0;
 void setup() {
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
 
  // put your setup code here, to run once:

}

void loop() {
  int b=digitalRead(2);
  if(b!=Pb)
  {
    count++;
    Pb=b;
    switch(count)
 {   case 1:
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(6,LOW);
     digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      case 2:
        digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(4,LOW);
      digitalWrite(4,LOW);
    
    
    
 }
     
  }
  // put your main code here, to run repeatedly:

}
