#include<SoftwareSerial.h>

SoftwareSerial my(2,3);

void setup()

{

  my.begin(9600);

  Serial.begin(9600);

}

 

void loop()

{

  int a;

  {

    Serial.println("Calling");

    my.println("ATD8619097801;\r\n");

    /*Serial.println("ATD");

    Serial.print("8619097801");

    Serial.print(";\r\n");*/

    delay(30000);

 

  }

}
