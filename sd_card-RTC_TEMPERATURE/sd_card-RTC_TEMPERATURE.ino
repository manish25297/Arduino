// SD MODULE CONNECTIONS 
// MOSI - 11
// MISO-12
//SCK-13
//CS-4
//VCC-5V
//GND-GND

// LM35 ANALOG INPUT   
// VOUT - A0
//VCC- 5V
//GND-GND

// RTC CONNECTIONS 
// SCL-A5
// SDA-A4
//VCC-5V
//GND - GND 



#include <Wire.h>
#include "RTClib.h"
#include <SD.h>
int sensor;

RTC_DS1307 RTC;


void setup () {
    Serial.begin(9600);
     while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  Serial.print("Initializing SD card...");

  if (!SD.begin(4)) {                           // defines the pin of the arduino to which cs of sd card is connected ( ie here cs pin is connected to pin 4 of arduino we can also change
                                                // it by changing the pin no.
    Serial.println("initialization failed!");
    return;
  }
  Serial.println("initialization done.");
    Wire.begin();
    RTC.begin();
  // Check to see if the RTC is keeping time.  If it is, load the time from your computer.
  if (! RTC.isrunning()) {
    Serial.println("RTC is NOT running!");
    // This will reflect the time that your sketch was compiled
    RTC.adjust(DateTime(__DATE__, __TIME__));
  }   
}
void loop () {
  
  
 File myFile = SD.open("ana.txt", FILE_WRITE);

  // if the file opened okay, write to it:
  if (myFile) {
     DateTime now = RTC.now(); 

   
    myFile.print(now.month(), DEC);
    myFile.print('/');
    myFile.print(now.day(), DEC);
     myFile.print('/');
     myFile.print(now.year(), DEC);
     myFile.print(' ');
     myFile.print(now.hour(), DEC);
     myFile.print(':');
     myFile.print(now.minute(), DEC);
     myFile.print(':');
     myFile.print(now.second(), DEC);
     myFile.print("          ,");  
     sensor = analogRead(A0);
     myFile.print("Temperature =");
     myFile.print(sensor/2);
     myFile.println();
     
    delay(1000);
    myFile.close();
}

else {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt");
  }
  delay(2000);
}
