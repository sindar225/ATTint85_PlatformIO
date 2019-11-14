#include <Arduino.h>

bool state = LOW;

void setup() {
  for (int i = 0; i <= 6; i++ ) {
    pinMode(i, OUTPUT);
  }
  
}

void loop() {
  state = !state;
  digitalWrite(1, state);
  delay(1000);
}