#include "ESP8266WiFi.h"
#include <Servo.h> 

Servo myservo;

const char* ssid = "SSID";
const char* password = "PASSWORD";

WiFiServer server(80);


void setup()
   {  Serial.begin(115200);
      delay(1500);

      myservo.attach(4);

      Serial.print("Connecting to ");
      Serial.println(ssid);
      WiFi.begin(ssid, password);

      while (WiFi.status() != WL_CONNECTED)
         {   delay(500);
             Serial.print(".");
         }
      Serial.println("WiFi connected");

      server.begin();                                // Iniciamos el servidor
      Serial.println("Server started");
      Serial.println(WiFi.localIP());      // Imprimimos la IP
   }





   
void loop() {

  WiFiClient client = server.available();
  if (!client)
     return;

  Serial.println("new client");
  while(!client.available())
      delay(1);

  String req = client.readStringUntil('\r');
  Serial.println(req);
  client.flush(); 

  
  int val;
  if ( req.indexOf("/gpio/0") != -1)
     val = 0;
  else if (req.indexOf("/gpio/1") != -1)
     val = 1;
  else
   { Serial.println("invalid request");
     client.stop();
     return;
   }

  if (val==0) myservo.write(90);
  else if (val==1) myservo.write(100);

  String s = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n<!DOCTYPE HTML>\r\n<html>\r\nGPIO is now ";
  s += (val)?"high":"low";
  s += "</html>\n";

  client.print(s);                    // Enviar el resultado de val al cliente
  delay(1);
  Serial.println("Client disonnected");
      


}
