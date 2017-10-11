#include <LiquidCrystal.h>

LiquidCrystal lcd(14, 15, 5, 4, 3, 2);

void setup() { // Displays Octicat and "GitHub Universe" to LCD
  lcd.begin(16, 2); // Initializes the LCD and states size in rows, columns
   
  byte octotl[8] = //top-left of octicat icon
  {
    0b01000,
    0b01111,
    0b01111,
    0b11111,
    0b10000,
    0b10010,
    0b01000,
    0b01111
  };

byte octotr[8] = //top-right of octicat icon
  {
    0b00010,
    0b11110,
    0b11110,
    0b11111,
    0b00001,
    0b01001,
    0b00010,
    0b11110
  };

  byte octobl[8] = //bottom-left of octicat icon
  {
    0b00001,
    0b10011,
    0b01111,
    0b00011,
    0b00101,
    0b00010,
    0b00000,
    0b11111
  };

  byte octobr[8] = //bottom-right of octicat icon
  {
    0b10000,
    0b11000,
    0b11000,
    0b11000,
    0b10100,
    0b01000,
    0b00000,
    0b11111
  };
  
byte octowv[8] = { //octowave
  0b10001,
  0b01011,
  0b00111,
  0b00011,
  0b00101,
  0b00010,
  0b00000,
  0b11111
};

    // create a new custom character
    lcd.createChar(0, octotl);
    lcd.createChar(1, octotr);
    lcd.createChar(2, octobl);
    lcd.createChar(3, octobr); 
    lcd.createChar(4, octowv);
}

void loop() {
  // set custom character position
  lcd.setCursor(0, 0);
  // write custom character 0
  lcd.write((uint8_t)0);
  // write custom character 1
  lcd.write((uint8_t)1);
  // Displays "GitHub"
  lcd.write("  GitHub");
  
  // set custom character position
  lcd.setCursor(0, 1);
  // write custom character 2
  lcd.write((uint8_t)2);
  // write custom character 3
  lcd.write((uint8_t)3);
  // Displays "Universe"
  lcd.write("  Universe");

  delay(1000);
  
  // set custom character position
  lcd.setCursor(0, 1);
  // write custom character 2
  lcd.write((uint8_t)4);
  // write custom character 3
  lcd.write((uint8_t)3);
  // Displays "Universe"
  lcd.write("  Universe");

  delay(1000);
}
