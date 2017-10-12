#ifndef DISPLAY_H
#define DISPLAY_H

#include <Arduino.h>

namespace Display {
  struct display_chars_t {
    byte top_left[8];
    byte top_right[8];
    byte bottom_left_1[8];
    byte bottom_left_2[8];
    byte bottom_right[8];
  };

  void setup();
  void print_all();
  void print_wave_1();
  void print_wave_2();
}

#endif
