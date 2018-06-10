#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

HTTPClient http;

const char* WIFINAME = "Coltrane";
const char* PASS = "Before Davis";

int led = D0;

void setup()
{
  Serial.begin(9600);
  delay(10);
  Serial.println("");
  pinMode(led, OUTPUT);
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

  if (WiFi.status() == WL_CONNECTED) {

    HTTPClient http;

    /////////////////http client to read data for LED//////////////////////////////
    http.begin("http://training.aarmontech.com/19/bulb.txt");
    int httpCode = http.GET();

    if (httpCode > 0) {

      String payload = http.getString();
      Serial.println(payload);
      if (payload.indexOf("1") > -1) {
        digitalWrite(led, HIGH);
      }
      else {
        digitalWrite(led, LOW);
      }

    }

    http.end();

  }

  delay(3000);
}

