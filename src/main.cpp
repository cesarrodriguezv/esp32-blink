#include <Arduino.h>

void setup() {
  pinMode(2, OUTPUT);     // GPIO2 is usually the onboard LED on many ESP32 Dev boards
}

void loop() {
  digitalWrite(2, HIGH);  // turn LED on
  delay(1000);            // wait 1 second
  digitalWrite(2, LOW);   // turn LED off
  delay(1000);            // wait 1 second
}
