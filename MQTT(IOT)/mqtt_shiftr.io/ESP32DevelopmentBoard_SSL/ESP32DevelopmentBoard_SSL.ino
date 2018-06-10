#include <WiFiClientSecure.h>
#include <MQTT.h>
#include <ESP8266WiFi.h>

int a=0;
const char ssid[] = "OnePlus 5";
const char pass[] = "123456789jv";

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
  while (!client.connect("broker.shiftr.io", "newpiforclass", "SomeWhereOverTheRainbows")) {
    Serial.print(".");
    delay(1000);
  }

  Serial.println("\nconnected!");

  //client.subscribe("/friend");
  // client.unsubscribe("/hello");
}

void setup() {
  Serial.begin(115200);
  Serial.println("Started : ");
  WiFi.begin(ssid, pass);
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(A0,INPUT);

  
  client.begin("broker.shiftr.io", 8883, net);
  
  //client.onMessage(messageReceived);

  connect();
}


int i = 0;


void loop() {
  client.loop();
  delay(10);  // <- fixes some issues with WiFi stability

  if (!client.connected()) {
    connect();
  }

  // publish a message roughly every second.
  a=analogRead(A0);
 
  Serial.println(a);
  //Serial.print(a);
  
  
  //i = i + 1;
    Serial.println(i);
   client.publish("/friend", String(a));
   delay(500);
  
}
