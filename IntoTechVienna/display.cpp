#include <Arduino.h>
#include <LiquidCrystal.h>
#include "display.h"

#define DISPLAY_RS 14
#define DISPLAY_E  15
#define DISPLAY_D4 5
#define DISPLAY_D5 4
#define DISPLAY_D6 3
#define DISPLAY_D7 2

namespace Display {
  LiquidCrystal lcd(
    DISPLAY_RS,
    DISPLAY_E,
    DISPLAY_D4,
    DISPLAY_D5,
    DISPLAY_D6,
    DISPLAY_D7
  );

  void setup() {
    display_chars_t display_chars {
      {0b01000, 0b01111, 0b01111, 0b11111, 0b10000, 0b10010, 0b01000, 0b01111},
      {0b00010, 0b11110, 0b11110, 0b11111, 0b00001, 0b01001, 0b00010, 0b11110},
      {0b00001, 0b10011, 0b01111, 0b00011, 0b00101, 0b00010, 0b00000, 0b11111},
      {0b10000, 0b11000, 0b11000, 0b11000, 0b10100, 0b01000, 0b00000, 0b11111},
      {0b10001, 0b01011, 0b00111, 0b00011, 0b00101, 0b00010, 0b00000, 0b11111}
    };

    lcd.begin(16, 2);

    lcd.createChar(0, display_chars.top_left);
    lcd.createChar(1, display_chars.top_right);
    lcd.createChar(2, display_chars.bottom_left_1);
    lcd.createChar(3, display_chars.bottom_left_2);
    lcd.createChar(4, display_chars.bottom_right);
  }

  void print_all() {
    lcd.setCursor(0, 0);
    lcd.write((uint8_t)0);
    lcd.write((uint8_t)1);
    lcd.write("  IntoTech");

    lcd.setCursor(0, 1);
    lcd.write((uint8_t)2);
    lcd.write((uint8_t)3);
    lcd.write("  Vienna");
  }

  void print_wave_1() {
    lcd.setCursor(0, 1);
    lcd.write((uint8_t)2);
  }

  void print_wave_2() {
    lcd.setCursor(0, 1);
    lcd.write((uint8_t)4);
  }
}
