/**
 * @file morse.ino
 * @author Ryan Lay (ryan@codewithher.org)
 * @brief This file shows how to use the morse code library (adapted from 
 * Arduino's official library). Notice how there's no mention of the Adafruit
 * functions or initializations?
 * @version 0.1
 * @date 2024-01-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <Morse.h>

Morse morse(6,1);

void setup() {
  morse.begin();
}

void loop() {
  // Blinks SOS in morse code
  morse.dot(); morse.dot(); morse.dot();
  morse.dash(); morse.dash(); morse.dash();
  morse.dot(); morse.dot(); morse.dot();
  delay(3000);
}
