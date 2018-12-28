#include "Adafruit_NeoPixel.h"

#define LED_COUNT 60

#define LED_PIN 9

Adafruit_NeoPixel strip = Adafruit_NeoPixel(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
 
void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  Serial.println("WS2812B Testing");
  
  pinMode(LED_BUILTIN, OUTPUT);
  
  randomSeed(analogRead(0));
  
  strip.begin();
   
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int redColor;
  int greenColor;
  int blueColor;
  int randDelay;

  
  randDelay = random(1000, 10000);
  Serial.println("Delay is:");
  Serial.println(randDelay);

  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED ON");
  
  redColor = random (0, 255);
  Serial.println("Red Color: ");
  Serial.println(redColor);
  
  greenColor = random (0, 255);
  Serial.println("Green Color: ");
  Serial.println(greenColor);
  
  blueColor = random (0, 255);
  Serial.println("Blue Color: ");
  Serial.println(blueColor);
  
  for (int i = 0; i < LED_COUNT; i++)
  {
    strip.setPixelColor(i, strip.Color(redColor, greenColor, blueColor));
  }

  strip.show();
  
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED OFF");
  
  delay(randDelay);
  
}
