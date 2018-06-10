// This example uses an ESP32 Development Board
// to connect to shiftr.io.
//
// You can check on your device after a successful
// connection here: https://shiftr.io/try.
//
// by Joël Gähwiler
// https://github.com/256dpi/arduino-mqtt

#include <WiFiClientSecure.h>
#include <MQTT.h>
#include <ESP8266WiFi.h>

int a=0;
const char ssid[] = "UA";
const char pass[] = "9772390855";

WiFiClientSecure net;
MQTTClient client;

unsigned long lastMillis = 0;

void connect() {
  Serial.print("checking wifi...");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(1000);
  }

  Serial.print("\nconnecting...");
  while (!client.connect("arduino", "try", "try")) {
    Serial.print(".");
    delay(1000);
  }

  Serial.println("\nconnected!");

  client.subscribe("/friend");
  // client.unsubscribe("/hello");
}

void messageReceived(String &topic, String &payload) {
  Serial.println("incoming: " + topic + " - " + payload);
  if(payload=="1")
  {digitalWrite(LED_BUILTIN,0);
   
  }
  else if(payload=="0")
  {digitalWrite(LED_BUILTIN,1);
   
  }
}

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, pass);
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(D1,INPUT);

  // Note: Local domain names (e.g. "Computer.local" on OSX) are not supported by Arduino.
  // You need to set the IP address directly.
  //
  // MQTT brokers usually use port 8883 for secure connections.
  client.begin("broker.shiftr.io", 8883, net);
  
  client.onMessage(messageReceived);

  connect();
}

void loop() {
  client.loop();
  delay(10);  // <- fixes some issues with WiFi stability

  if (!client.connected()) {
    connect();
  }

  // publish a message roughly every second.
  a=digitalRead(D1);
  Serial.println( "input=");
  Serial.print(a);
  delay(500);
  
  if (a==1) {
   client.publish("/friend", "1");
   
    }
  else if (a==0) {
   client.publish("/friend", "0");
   
    }
  
}
