#include "Morse.h"

Morse::Morse(int pin, int numPixels) {
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
  _pixels.setPixelColor(0, 150, 150, 150);
  _pixels.show();   // Send the updated pixel colors to the hardware.
}

void Morse::lightOff() {
  _pixels.setPixelColor(0, 0, 0, 0);
  _pixels.show();
}