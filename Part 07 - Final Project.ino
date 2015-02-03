/*

Final Project - Combining everything that we learned in one program!
Part 07

*/

//--- Pixel Setup ----//
#include <Adafruit_NeoPixel.h>
#define PIN            6
#define NUMPIXELS      1
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

//--- DHT11 Temperature / Humidity Sensor Setup ----//
#include "DHT.h"
#define DHTPIN 4        // what pin we're connected to
#define DHTTYPE DHT11   // DHT 11 
DHT dht(DHTPIN, DHTTYPE);

//--- Other Setup---//
#define delayX 1000

void setup() {
  Serial.begin(9600); 
  dht.begin(); // This initializes the DHT11 library.
  pixels.begin(); // This initializes the NeoPixel library.
}

void loop() {

  // Read All Temperatures
  int h = dht.readHumidity();
  int t = dht.readTemperature();
  int f = dht.readTemperature(true);
  
  // Defining Colors
  int red = t * 5; 
  int blue = 255 - t * 5;
  
  //Safe bondaries
  if(blue>255){ blue = 255;}
  if(blue<0)  { blue = 0;  }
  if(red>255) { red = 255; }
  if(blue<0)  { blue = 0;  }

  // Display Colors
  // Green Brightness = Humidity
  pixels.setPixelColor(0, pixels.Color(red,0,blue));
  pixels.show(); // Send data to leds
  
  // Serial Display Info
  Serial.print("Humidity: "); 
  Serial.print(h);
  Serial.print("%\t");
  Serial.print("Temperature: ["); 
  Serial.print(t);
  Serial.print("C / ");
  Serial.print(f);
  Serial.print("F]\t");
  Serial.print("RGB[ ");
  Serial.print(red);
  Serial.print(" / ");
  Serial.print(0);
  Serial.print(" / ");
  Serial.print(blue);
  Serial.println("]");
  
  //Delay for next read
  delay(delayX); 

}


// Good Job!! :)