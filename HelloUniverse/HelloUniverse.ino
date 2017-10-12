#include "display.h"

void setup() {
  Display::setup();
  Display::print_all();
}

void loop() {
  delay(1000);
  Display::print_wave_2();
  
  delay(1000);
  Display::print_wave_1();
}
