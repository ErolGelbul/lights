#include <FastLED.h>
#define LED_PIN 7
#define NUM_LEDS 300

#define BRIGHTNESS          150
#define FRAMES_PER_SECOND  200
CRGB leds[NUM_LEDS];


void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 900);
  FastLED.clear();
  FastLED.show();
 
}
void loop() {
  Sparkle(0xff, 0xff, 0xff, 0);
}

void Sparkle(byte red, byte green, byte blue, int SpeedDelay) {
  int Pixel = random(NUM_LEDS);
  leds[Pixel] = CRGB(red, green, blue);
  FastLED.show();
  delay(SpeedDelay);
  leds[Pixel] = CRGB(0, 0, 0);
}
