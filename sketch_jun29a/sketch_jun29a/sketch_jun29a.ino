#include<EEPROM.h>
char ch[20]= {'m','a','n','i','s','h'};
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
for(int i=0;i<6;i++){
EEPROM.write(i,ch[i]);
}
for(int i=0;i<6;i++){
char ch1=EEPROM.read(i);
Serial.println(ch1);}

}

void loop() {
  // put your main code here, to run repeatedly:

}
