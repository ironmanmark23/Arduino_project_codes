#include <CayenneArduinoDefines.h>
#include <CayenneArduinoMQTTClient.h>
#include <CayenneHandlers.h>
#include <CayenneMessage.h>
#include <CayenneMQTTESP32.h>
#include <CayenneMQTTESP8266.h>
#include <CayenneMQTTWiFiClient.h>
#include <DetectDevice.h>

int pin = 2;

void setup() {
  // initialize GPIO 2 as an output.
  pinMode(pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
