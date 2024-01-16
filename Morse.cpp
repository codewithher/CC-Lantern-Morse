#include "Morse.h"

Morse::Morse() {
  // Assumes default lantern core design with 1 LED and using pin 6
  _pin = 6;
  _numPixels = 1;
  _pixels = Adafruit_NeoPixel(_numPixels, _pin, NEO_GRB + NEO_KHZ800);
}

Morse::Morse(int pin, int numPixels) {
  // Leaves a custom constructor for other lantern core circuits
  _pin = pin;
  _numPixels = numPixels;
  _pixels = Adafruit_NeoPixel(_numPixels, _pin, NEO_GRB + NEO_KHZ800);
}

void Morse::begin() {
  _pixels.setBrightness(50);
  _pixels.begin();
}

void Morse::dot() {
  lightOn();
  delay(250);
  lightOff();
  delay(250);  
}

void Morse::dash() {
  lightOn();
  delay(1000);
  lightOff();
  delay(250);
}

void Morse::lightOn() {
  pixels.setPixelColor(0, 150, 150, 150);
  pixels.show();   // Send the updated pixel colors to the hardware.
}

void Morse::lightOff() {
  pixels.setPixelColor(0, 0, 0, 0);
  pixels.show();
}