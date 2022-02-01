#include <FastLED.h>
#define LED_PIN 7
#define NUM_LEDS 416

#define BRIGHTNESS          150
#define FRAMES_PER_SECOND  120
CRGB leds[NUM_LEDS];


void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 900);
  FastLED.clear();
  FastLED.show();

  FastLED.setBrightness(255);
 
}

void loop() {
  // put your main code here, to run repeatedly:

   

  
}


void linePop(int r, int g, int b, int start, int fin, int fadein, int fadeoff) {
  for (int i=start; i<fin; i++){
    leds[i] = CRGB(r, g, b);
  }
  FastLED.show();
}
