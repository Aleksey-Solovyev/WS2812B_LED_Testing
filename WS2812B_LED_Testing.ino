#include "Adafruit_NeoPixel.h"

#define LED_COUNT 60

#define LED_PIN 9

Adafruit_NeoPixel strip = Adafruit_NeoPixel(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
 
void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  Serial.println("WS2812B Testing");
  strip.begin();
   
}

void loop() {
  // put your main code here, to run repeatedly:

}
