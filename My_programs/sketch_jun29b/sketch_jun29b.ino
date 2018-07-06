//to print the ascii of input through serial monitor

int data1 = 0;
void setup()
{
  Serial.begin(9600);
}
void loop() 
{
  if (Serial.available() > 0) {
    data1 = Serial.read();
    // display incoming number
    Serial.print(" ");
    Serial.print(data1, DEC);
  }
}

