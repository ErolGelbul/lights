#include <FastLED.h>
#define LED_PIN 7
#define NUM_LEDS 300

#define BRIGHTNESS          150
#define FRAMES_PER_SECOND  120
CRGB leds[NUM_LEDS];


void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 900);
  FastLED.clear();
  FastLED.show();
 
}



void loop() {
 
  chaseMe(255, 255, 255, 279, 279, 169, 48);
  chaseMe(255, 255, 255, 278, 278, 169, 48);
  chaseMe(255, 255, 255, 279, 279, 169, 48);
  chaseMe(255, 255, 255, 280, 280, 169, 48);
  
  
  //Strobe(0xff, 0xff, 0xff, 10, 50, 1000, 1000);
  //delay(30000000);
  
  //Strobe(0xff, 0xff, 0xff, 10, 50, 1000, 1000);
  
  //SnowSparkle(0x10, 0x10, 0x10, 20, random(100,1000), 10000);
   
  //colorRun(51, 255, 255, 255, 0, 255, 210, 210, 270, 135, 1);

  //meteorRain(0xff,0xff,0xff,10, 64, true, 5);
  //Strobe(0xff, 0xff, 0xff, 10, 50, 1000);

  //Sparkle(random(255), random(255), random(255), 0);
  
  //Twinkle(0xff, 0, 0, 30, 100, false);
  //Twinkle(0xff, 0, 0, 30, 100, false);
  //Twinkle(0xff, 0, 0, 30, 100, false);
  //Twinkle(0xff, 0, 0, 30, 100, false);  
  
  
  //READY SET GO
  leds[220] = CRGB(255, 255, 255);
  FastLED.show();
  delay(1000);
  leds[220] = CRGB(0, 0, 255);
  FastLED.show();
  delay(1000);
  leds[220] = CRGB(255, 0, 0);
  FastLED.show();
  delay(1000);
  leds[220] = CRGB(255, 255, 0);
  FastLED.show();
  delay(1000);
  leds[220] = CRGB(0, 255, 0);
  FastLED.show();
  delay(1000);
  leds[220] = CRGB(0, 0, 0);
  FastLED.show();
  //READY SET GO FIN


  

  
  // WHITE PASSING------------------------------
  linePop(255, 255, 255, 280, 300, 32, 48);
  delay(7);
  linePop(255, 255, 255, 260, 280, 32, 48);
  delay(7);
  linePop(255, 255, 255, 240, 260, 32, 48);
  delay(7);
  linePop(255, 255, 255, 220, 240, 32, 48);
  delay(7);
  linePop(255, 255, 255, 200, 220, 32, 48);
  delay(7);
  linePop(255, 255, 255, 180, 200, 32, 48);
  delay(7);
  linePop(255, 255, 255, 160, 180, 32, 48);
  delay(7);
  linePop(255, 255, 255, 135, 160, 32, 48);
  delay(7);


  linePop(255, 255, 255, 135, 160, 32, 48);
  delay(7);
  linePop(255, 255, 255, 160, 180, 32, 48);
  delay(7);
  linePop(255, 255, 255, 180, 200, 32, 48);
  
  linePop(255, 255, 255, 200, 220, 32, 48);
  
  linePop(255, 255, 255, 220, 240, 32, 48);
  
  linePop(255, 255, 255, 240, 260, 32, 48);
  
  linePop(255, 255, 255, 260, 280, 32, 48);
  //WHITE PASSING--------------------------------

  linePop(255, 255, 255, 135, 300, 32, 48);
  
  //RED PASSING----------------------------------
  linePop(255, 0, 0, 280, 300, 27, 48);
 
  linePop(255, 0, 0, 260, 280, 27, 48);
  
  linePop(255, 0, 0, 240, 260, 27, 48);
  
  linePop(255, 0, 0, 220, 240, 32, 48);
  
  linePop(255, 0, 0, 200, 220, 32, 48);
  
  linePop(255, 0, 0, 180, 200, 27, 48);
  
  linePop(255, 0, 0, 160, 180, 27, 48);


  linePop(255, 0, 0, 135, 160, 27, 48);
  
  linePop(255, 0, 0, 160, 180, 32, 48);
  
  linePop(255, 0, 0, 180, 200, 32, 48);
  
  linePop(255, 0, 0, 200, 220, 32, 48);
  
  linePop(255, 0, 0, 220, 240, 32, 48);
  
  linePop(255, 0, 0, 240, 260, 27, 48);
  
  linePop(255, 0, 0, 260, 280, 32, 48);
 
  linePop(255, 0, 0, 280, 300, 32, 48);
  //RED PASSING-----------------------------------


  linePop(255, 0, 0, 135, 300, 32, 48);
  
  //MIXED PASSING---------------------------------
  
  linePop(255, 255, 255, 280, 300, 32, 48);
  delay(7);
  linePop(255, 0, 0, 135, 155, 32, 48);
  delay(7);
  linePop(255, 255, 255, 260, 280, 32, 48);
  delay(7);
  linePop(255, 0, 0, 155, 175, 32, 48);
  delay(7);
  linePop(255, 255, 255, 240, 260, 32, 48);
  delay(7);
  linePop(255, 0, 0, 175, 195, 32, 48);
  delay(7);
  linePop(255, 255, 255, 220, 240, 32, 48);
  delay(7);

  
  linePop(255, 40, 50, 135, 300, 32, 48);


  linePop(255, 255, 255, 220, 240, 32, 48);
  delay(7);
  linePop(255, 0, 0, 175, 195, 32, 48);
  delay(7);
  linePop(255, 255, 255, 240, 260, 32, 48);
  delay(7);
  linePop(255, 0, 0, 155, 175, 32, 48);
  delay(7);
  linePop(255, 255, 255, 260, 280, 32, 48);
  delay(7);
  linePop(255, 0, 0, 135, 155, 32, 48);
  delay(7);
  linePop(255, 255, 255, 280, 300, 32, 48);



  linePop(255, 255, 255, 280, 300, 32, 48);
  delay(7);
  linePop(255, 0, 0, 135, 155, 32, 48);
  delay(7);
  linePop(255, 255, 255, 260, 280, 32, 48);
  delay(7);
  linePop(255, 0, 0, 155, 175, 32, 48);
  delay(7);
  linePop(255, 255, 255, 240, 260, 32, 48);
  
  linePop(255, 0, 0, 175, 195, 27, 48);
  
  linePop(255, 255, 255, 220, 240, 27, 48);
 
  
  //MIXED PASSING-------------------------------

  //(int r, int g, int b, int r2, int g2, int b2, int start, int start2, int fin, int fin2, int wait) {
  firstRightSecondLeft(255, 0, 255, 51, 255, 255,             210,       210,       255,     155,       40);

 
 //VOCALS STARTING!------------------------
  //colorRun(int r, int g, int b, int r2, int g2, int b2, int start, int start2, int fin, int fin2, int wait
  
  
  firstRightSecondLeft(51, 255, 255, 255, 0, 255,             135,       300,       218,     219,       40);
  firstRightSecondLeft(255, 0, 255, 51, 255, 255,             218,       219,       255,     155,       70);

  sameSideRightSwiff(51, 255, 255, 255, 0, 255,               135,       270,       155,     300,       37);
  sameSideRightSwiff(51, 255, 255, 255, 0, 255,               155,       250,       175,     270,       36);
  sameSideRightSwiff(51, 255, 255, 255, 0, 255,               175,       230,       195,     250,       36);
  sameSideRightSwiff(51, 255, 255, 255, 0, 255,               195,       210,       215,     230,       36);

  sameSideLeftSwiff(255, 0, 255, 51, 255, 255,                155,       300,       135,     270,       36);
  sameSideLeftSwiff(255, 0, 255, 51, 255, 255,                175,       270,       155,     250,       36);
  sameSideLeftSwiff(255, 0, 255, 51, 255, 255,                195,       250,       175,     230,       36);
  sameSideLeftSwiff(255, 0, 255, 51, 255, 255,                215,       230,       195,     210,       36);

  sameSideRightSwiff(51, 255, 255, 255, 0, 255,               135,       270,       155,     300,       1);
  sameSideLeftSwiff(255, 0, 255, 51, 255, 255,                155,       300,       135,     270,       1);
  sameSideRightSwiff(51, 255, 255, 255, 0, 255,               135,       270,       155,     300,       1);
  sameSideLeftSwiff(255, 0, 255, 51, 255, 255,                155,       300,       135,     270,       1);
  delay(1300);

  //NEW VERSE STARTING!------------------------
  
  chaseMe(255, 255, 255, 279, 279, 32, 48);
  chaseMe(255, 255, 255, 278, 278, 32, 48);
  chaseMe(255, 255, 255, 279, 279, 32, 48);
  chaseMe(255, 255, 255, 280, 280, 32, 48);

  
  
  //Twinkle(0xff, 0, 0, 30, 175, false);
  //Twinkle(255, 255, 255, 30, 150, false);
  //Twinkle(51, 255, 255, 30, 150, false);
  //Twinkle(255, 0, 255, 30, 130, false); 


  //GIVE ME REASONS WE SHOULD BE COMPLETE:
  FastLED.clear();
  delay(2580);


   singlePop(255, 5, 5, 299, 100);
   singlePop(255, 5, 5, 297, 100);
   singlePop(255, 5, 5, 295, 100);
   singlePop(255, 5, 5, 290, 100);
   singlePop(255, 5, 5, 285, 100);
   singlePop(255, 5, 5, 294, 100);
   singlePop(255, 5, 5, 280, 100);
   singlePop(255, 5, 5, 281, 100);
   singlePop(255, 5, 5, 286, 100);
   singlePop(255, 5, 5, 287, 100);
   singlePop(255, 5, 5, 283, 100);
   singlePop(255, 5, 5, 277, 100);
   singlePop(255, 5, 5, 275, 100);
   singlePop(255, 5, 5, 279, 100);
   singlePop(255, 5, 5, 271, 100);
   singlePop(255, 5, 5, 276, 100);
   singlePop(255, 5, 5, 273, 100);
   singlePop(255, 5, 5, 271, 100);
   singlePop(255, 5, 5, 269, 100);
   singlePop(255, 5, 5, 267, 100);
   singlePop(255, 5, 5, 264, 100);
   singlePop(255, 5, 5, 265, 100);
   singlePop(255, 5, 5, 262, 100);
   singlePop(255, 5, 5, 260, 100);
   singlePop(255, 5, 5, 258, 100);
   singlePop(255, 5, 5, 256, 100);
   singlePop(255, 5, 5, 255, 100);
   singlePop(255, 5, 5, 250, 100);
   singlePop(255, 5, 5, 241, 100);


   singlePop(255, 5, 5, 135, 100);
   singlePop(255, 5, 5, 137, 100);
   singlePop(255, 5, 5, 138, 100);
   singlePop(255, 5, 5, 140, 100);
   singlePop(255, 5, 5, 141, 100);
   singlePop(255, 5, 5, 144, 100);
   singlePop(255, 5, 5, 146, 100);
   singlePop(255, 5, 5, 149, 100);
   singlePop(255, 5, 5, 153, 100);
   singlePop(255, 5, 5, 147, 100);
   singlePop(255, 5, 5, 155, 100);
   singlePop(255, 5, 5, 152, 100);
   singlePop(255, 5, 5, 150, 100);
   singlePop(255, 5, 5, 159, 100);
   singlePop(255, 5, 5, 158, 100);
   singlePop(255, 5, 5, 160, 100);
   singlePop(255, 5, 5, 163, 100);
   singlePop(255, 5, 5, 162, 100);
   singlePop(255, 5, 5, 168, 100);
   singlePop(255, 5, 5, 165, 100);
   singlePop(255, 5, 5, 171, 100);
   singlePop(255, 5, 5, 174, 100);
   singlePop(255, 5, 5, 175, 100);
   singlePop(255, 5, 5, 178, 100);
   singlePop(255, 5, 5, 179, 100);
   singlePop(255, 5, 5, 181, 100);
   singlePop(255, 5, 5, 183, 100);
   singlePop(255, 5, 5, 186, 100);
   singlePop(255, 5, 5, 189, 100);
  
  
  meteorRain(51,255,255,10, 64, true, 25);
  delay(1450);

  linePop(255, 255, 255, 135, 300, 32, 48);

  delay(300000);
  
}



void singlePop(int r, int g, int b, int pixel, int wait) {
    leds[pixel] = CRGB(r, g, b);
    FastLED.show();
    delay(wait);
}



void linePop(int r, int g, int b, int start, int fin, int fadein, int fadeoff) {
  for (int i=start; i<fin; i++){
    leds[i] = CRGB(r, g, b);
  }
  for (int i=0; i<fadein; i++) {
    FastLED.setBrightness(5*i);
    FastLED.show();
  }
  FastLED.show();
  for (int i=240; i<0; i--) {
    FastLED.setBrightness(i-fadeoff);
    FastLED.show();
  }
  for (int i=start; i<fin; i++){
    leds[i] = CRGB(0, 0, 0);
  }
  FastLED.show();
}


void chaseMe(int r, int g, int b, int start, int fin, int fadein, int fadeoff) {
  leds[start] = CRGB(r, g, b);
  
  for (int i=0; i<fadein; i++) {
    FastLED.setBrightness(i);
    FastLED.show();
  }
  FastLED.show();
  for (int i=240; i<0; i--) {
    FastLED.setBrightness(i-fadeoff);
    FastLED.show();
  }
  for (int i=start; i<fin; i++){
    leds[i] = CRGB(0, 0, 0);
  }
  FastLED.show();
  leds[start] = CRGB(0, 0, 0);
}


        //colorRun(51, 255, 255,            255, 0, 255,         210, 210, 270, 135, 1);
void firstRightSecondLeft(int r, int g, int b, int r2, int g2, int b2, int start, int start2, int fin, int fin2, int wait) {
  int j = start2;
  for (int i=start; i < fin; i++){
    leds[i] = CRGB(r, g, b);
    leds[j] = CRGB(r2, g2, b2);
    FastLED.show();
    delay(wait);
    j--;
    
  }   
  for (int i=start; i < fin; i++){
    leds[i].fadeToBlackBy(255);
    leds[start2].fadeToBlackBy(255); 
    FastLED.show();
    start2--;
  } 
}


void sameSideRightSwiff(int r, int g, int b, int r2, int g2, int b2, int start, int start2, int fin, int fin2, int wait) {
  int j = start2;
  for (int i=start; i < fin; i++){
    leds[i] = CRGB(r, g, b);
    leds[j] = CRGB(r2, g2, b2);
    FastLED.show();
    delay(wait);
    j++;
    
  }   
  for (int i=start; i < fin; i++){
    leds[i].fadeToBlackBy(255);
    leds[start2].fadeToBlackBy(255); 
    FastLED.show();
    start2++;
  } 
}

  
void sameSideLeftSwiff(int r, int g, int b, int r2, int g2, int b2, int start, int start2, int fin, int fin2, int wait) {
  int j = start2;
  for (int i=start; i > fin; i--){
    leds[i] = CRGB(r, g, b);
    leds[j] = CRGB(r2, g2, b2);
    FastLED.show();
    delay(wait);
    j--;
    
  }   
  for (int i=start; i > fin; i--){
    leds[i].fadeToBlackBy(255);
    leds[start2].fadeToBlackBy(255); 
    FastLED.show();
    start2--;
  } 
}


void SnowSparkle(byte red, byte green, byte blue, int SparkleDelay, int SpeedDelay, int Timer) {
  for (int i=0; i > Timer; i++) {
    int Pixel = random(NUM_LEDS);
    leds[Pixel] = CRGB(0xff, 0xff, 0xff);
    FastLED.show();
    delay(SparkleDelay);
    leds[Pixel] = CRGB(red, green, blue);
    FastLED.show();
    delay(SpeedDelay);
  }
}



void Twinkle(byte red, byte green, byte blue, int Count, int SpeedDelay, boolean OnlyOne) {
  FastLED.clear();
 
  for (int i=0; i<Count; i++) {
      leds[random(NUM_LEDS)] = (CRGB(red, green, blue));
     FastLED.show();
     delay(SpeedDelay);
     if(OnlyOne) {
       FastLED.clear();
     }
   }
 
  delay(SpeedDelay);
  FastLED.clear();
}


void Sparkle(byte red, byte green, byte blue, int SpeedDelay) {
  
  for (int a = 0; a < 1000; a++) {
  int i = random(NUM_LEDS);
  leds[i] = (CRGB(red, green, blue));
  FastLED.show();
  delay(SpeedDelay);
  FastLED.clear();
  }
}


void Strobe(byte red, byte green, byte blue, int StrobeCount, int FlashDelay, int EndPause, int Times){
  for (int i = 0; i < Times; i++) {
    for(int j = 0; j < StrobeCount; j++) {
      fill_solid( leds, NUM_LEDS, CRGB(red,blue,green));
      FastLED.show();
      delay(FlashDelay);
      FastLED.clear();
      FastLED.show();
      delay(FlashDelay);
    }
  }
 
 delay(EndPause);
}



void meteorRain(byte red, byte green, byte blue, byte meteorSize, byte meteorTrailDecay, boolean meteorRandomDecay, int SpeedDelay) {  
  //fill_solid( leds, NUM_LEDS, CRGB(0,0,0));
 
  for(int i = 0; i < NUM_LEDS+75; i++) {
   
   
    // fade brightness all LEDs one step
    for(int j=0; j<NUM_LEDS; j++) {
      if( (!meteorRandomDecay) || (random(10)>5) ) {
        fadeToBlack(j, meteorTrailDecay );        
      }
    }
   
    // draw meteor
    for(int j = 0; j < meteorSize; j++) {
      if( ( i-j <NUM_LEDS) && (i-j>=0) ) {
        leds[i-j] = CRGB(red, green, blue);
      }
    }
    if ( i == 375 ) {
      break;
    }
    FastLED.show();
    delay(SpeedDelay);
  }
}


void clearTheScreen(byte red, byte green, byte blue, byte meteorSize, byte meteorTrailDecay, boolean meteorRandomDecay, int SpeedDelay) {  
  fill_solid( leds, NUM_LEDS, CRGB(0,0,0));
 
  for(int i = 0; i < NUM_LEDS+NUM_LEDS; i++) {
   
   
    // fade brightness all LEDs one step
    for(int j=0; j<NUM_LEDS; j++) {
      if( (!meteorRandomDecay) || (random(10)>5) ) {
        fadeToBlack(j, meteorTrailDecay );        
      }
    }
   
    // draw meteor
    for(int j = 300; j > meteorSize; j--) {
      if( ( j-i <NUM_LEDS) && (j-i>=0) ) {
        leds[j-i] = CRGB(red, green, blue);
      }
    }
    if ( i == 300 ) {
      break;
    }
    FastLED.show();
    delay(SpeedDelay);
  }
}


void fadeall() { for(int i = 0; i < NUM_LEDS; i++) { leds[i].nscale8(250); } }

void fadeToBlack(int ledNo, byte fadeValue) {
 #ifdef ADAFRUIT_NEOPIXEL_H
    // NeoPixel
    uint32_t oldColor;
    uint8_t r, g, b;
    int value;
   
    oldColor = strip.getPixelColor(ledNo);
    r = (oldColor & 0x00ff0000UL) >> 16;
    g = (oldColor & 0x0000ff00UL) >> 8;
    b = (oldColor & 0x000000ffUL);

    r=(r<=10)? 0 : (int) r-(r*fadeValue/256);
    g=(g<=10)? 0 : (int) g-(g*fadeValue/256);
    b=(b<=10)? 0 : (int) b-(b*fadeValue/256);
   
    strip.setPixelColor(ledNo, r,g,b);
 #endif
 #ifndef ADAFRUIT_NEOPIXEL_H
   // FastLED
   leds[ledNo].fadeToBlackBy( fadeValue );
 #endif  
}






 // Turn lights from green to blue from left to right   R G B 
  //for (int i=0; i<NUM_LEDS; i++){
    //leds[i] = CRGB(0, 255 - 4*i, 4*i );
    //FastLED.setBrightness(2*i);
    //FastLED.show();
    //delay(50);
  //}
  // Turn lights from blue to magenta from right to left 
  //for (int i=NUM_LEDS; i>0; i--){
    //leds[i] = CRGB(4*i,0 , 255-4*i);
    //FastLED.setBrightness(100-i);
    //FastLED.show();
    //delay(50);
  //}
