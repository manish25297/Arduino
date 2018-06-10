#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

HTTPClient http;

const char* WIFINAME = "Coltrane";
const char* PASS = "Before Davis";

int inputpin = A0;

void setup()
{
  Serial.begin(9600);
  delay(10);
  Serial.println("");
  
  Serial.print("Connecting To ");
  Serial.println(WIFINAME);

  if (WiFi.status() != WL_CONNECTED) {
    WiFi.begin(WIFINAME, PASS);
  }

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi Connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop()
{
  //code to read data from A0 pin of the nodemcu attched
  //to the LM35 Temprature Sensor
  int analogValue = analogRead(outputpin);
  float millivolts = (analogValue / 1024.0) * 3300;
  float celsius = millivolts / 10;
  Serial.print("in DegreeC=   ");
  Serial.println(celsius);
  
  
  //check if wifi is still connected,
  //if yes, then carry on further Internte work.
  if (WiFi.status() == WL_CONNECTED) {

    ////////////////////////////////////////////////////////////////////////////////////
    ///////////////////http client to send data of Temprature///////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////
    
    //First we make our web address to send data
    String stringTempratureURL = "http://training.aarmontech.com/yourpage?temprature=";
    
    // we add our celsius data to above web address as "?temprature=ourvaluetosend"
    stringTempratureURL = stringTempratureURL + String(celsius);
    
    //Again doing same thing as before
    http.begin(stringTempratureURL);
    httpCode = http.GET();
    if (httpCode > 0) {
      
      //String payload = http.getString();
      //Serial.println(payload);
      Serial.println(httpCode);
      
    }

  }

  delay(3000);
}

