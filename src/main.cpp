#include <Arduino.h>
#define LED_PIN 1 //P1 on Digispark

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(100);
  digitalWrite(LED_PIN, LOW);
  delay(2000); // changed from 2500ms to 2000ms from main.cpp in local repo
}
