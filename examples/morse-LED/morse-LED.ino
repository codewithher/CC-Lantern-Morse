/**
 * @file morse-led.ino
 * @author Ryan Lay (ryan@codewithher.org)
 * @brief This file shows the slightly adapted Morse code example to use the 
 * Adafruit library to blink a light instead of sending data to pins. This shows
 * what it would look like without the morse code library.
 * @version 0.1
 * @date 2024-01-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */


///////////////////////////// DON'T TOUCH /////////////////////////////////////
#include <Adafruit_NeoPixel.h>
#define PIN         6
#define NUMPIXELS   1     // number of lights
#define DELAYVAL    500   // 500 milliseconds = 0.5 seconds
#define BRIGHTNESS  50    // Set BRIGHTNESS to about 1/5 (max = 255)
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
///////////////////////////////////////////////////////////////////////////////

void setup() {
  pixels.setBrightness(BRIGHTNESS); 
  pixels.begin();
}

void loop() {
  // light();
  // SOS
  dot(); dot(); dot();
  dash(); dash(); dash();
  dot(); dot(); dot();
  delay(3000);
}

///////////////////////////////////////////////////////////////////////////////
// Functions
void dot()
{
  lightOn();
  delay(250);
  lightOff();
  delay(250);
}

void dash()
{
  lightOn();
  delay(1000);
  lightOff();
  delay(250);
}

void lightOn() {
  // Set color values here! Colors range from 0 to 255
  // TODO: change me!
  int Red = 0;
  int Green = 150;
  int Blue = 0;
  
  pixels.setPixelColor(0, pixels.Color(Red, Green, Blue));
  pixels.show();   // Send the updated pixel colors to the hardware.
  // delay(DELAYVAL); // Pause before next pass through loop
}

void lightOff() {
  int Red = 0;
  int Green = 0;
  int Blue = 0;
  
  pixels.setPixelColor(0, pixels.Color(Red, Green, Blue));
  pixels.show();   // Send the updated pixel colors to the hardware.
}
