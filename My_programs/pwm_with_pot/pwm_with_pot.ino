//the brightness of the led vary corresponding to the value
//of the pot
// the output of the pot is connected to A0
// and the led is connected to the 3rd pin
void setup() {
  // put your setup code here, to run once:
PinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int st=analogRead(A0);
  analogWrite(3,st);
}
