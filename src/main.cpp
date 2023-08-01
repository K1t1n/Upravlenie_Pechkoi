#include <Arduino.h>

#include <EncButton.h>
EncButton <EB_TICK, 2, 3, 4> enc;

#include <ServoSmooth.h>



void setup() {
  Serial.begin(9600);
}

void loop() {
  enc.tick();
  if (enc.turn()) Serial.println("turn");
  if (enc.turnH()) Serial.println("hold+turn");
  
}

