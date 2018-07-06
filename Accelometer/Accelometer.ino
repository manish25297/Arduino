const int xpin = A3;
const int ypin = A2;
const int zpin = A1;
void setup() {
  Serial.begin(9600);
  analogReference(EXTERNAL);
}

void loop() {
  Serial.print(analogRead(xpin));
  Serial.print("\t");
  Serial.print(analogRead(ypin));
  Serial.print("\t");
  Serial.print(analogRead(zpin));
  Serial.println();
  delay(1000);


}
