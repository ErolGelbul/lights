#include <FastLED.h>
#define NUM_LEDS 300
#define PIN 7
CRGB leds[NUM_LEDS];

void setup() { FastLED.addLeds<WS2812,PIN>(leds, NUM_LEDS); }
void loop() { 
    static byte pos = 0;
    if(pos == NUM_LEDS) { 
      // we've lit all the less, now turn them all off and start again
      for(int i = 0; i < NUM_LEDS; i++ ) { leds[i] = CRGB::Black; }
      pos = 0; 
   }
    leds[pos++] = CRGB::White;
    FastLED.show();
}
