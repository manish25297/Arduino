 /*Connect Tx of GPS to pin 2 of Arduino.
  *Rx pin of GPS can be left open.
  *Connect Gnd of GPS to Gnd of Arduino.
  *Supply varies for GPS modules from 5 to 12v. Please refer to the respective gps module's       manual.
  *Dump the following code and observe output on serial window.
  *Set the baud rate on Serial window at 4800.
  *For any queries, mail ,me at: dusanersaurabh@gmail.com
*/



#include <SoftwareSerial.h>
#include <TinyGPS.h>
long lat,lon; // create variable for latitude and longitude object 
SoftwareSerial GPS(2,3); // create gps sensor connection
TinyGPS gps; // create gps object

void setup()
{                                     
  Serial.begin(4800);
  GPS.begin(9600);
}

void loop()
{ 
  byte a;
  if(GPS.available())  
    {
   a=GPS.read();
   
   //Serial.write(a);  uncomment this line to get NMEA data on Serial window
   while(gps.encode(a))
   { 
    gps.get_position(&lat,&lon);
    Serial.print("Position: ");
    Serial.print("\n");
    Serial.print("lat");

    
    Serial.print((lat*0.000001),8);
    Serial.print(",");
    Serial.print("lon");  

   Serial.println((lon*0.000001),8); 
    Serial.print("\n"); 

    
}
}
}
