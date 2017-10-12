#include "display.h"

void setup() {
  Display::setup();
  Display::print_all();
}

void loop() {
  delay(1000);
  Display::print_wag_2();
  
  delay(1000);
  Display::print_wag_1();
}
