/*

NeoPixel RGB LED
Part 06

*/


//--- Pixel Setup ----//
#include <Adafruit_NeoPixel.h>
#define PIN            6
#define NUMPIXELS      1
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
}

void loop() {

    pixels.setPixelColor(0, pixels.Color(255,0,0));
    pixels.show(); // Send data to leds
    delay(1000);

    pixels.setPixelColor(0, pixels.Color(0,255,0));
    pixels.show(); // Send data to leds
    delay(1000);

    pixels.setPixelColor(0, pixels.Color(0,0,255));
    pixels.show(); // Send data to leds
    delay(1000);

}