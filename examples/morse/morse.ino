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
