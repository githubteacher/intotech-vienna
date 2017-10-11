#include "display.h"
#include "sensor.h"
#include <LiquidCrystal.h>  // Arduino LCD library
#include <Arduino.h>  // enables use of byte pics

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

// Displays temperature to LCD
  void displayTemp(int tempInt) {
    char tempChar[17];
    snprintf(tempChar, sizeof tempChar, "Temperature: %d", tempInt);
    printRow(0, tempChar);
    // set customer character position
    lcd.setCursor(15, 0);
    // write custom character
    lcd.write((uint8_t)0);
}

// Displays humidity to LCD
  void displayHum(int humInt) {
    char tempChar[16];
    snprintf(tempChar, sizeof tempChar, "Humidity: %d", humInt);
    printRow(1, tempChar);
    // set customer character position
    lcd.setCursor(12, 1);
    // write custom character
    lcd.write((uint8_t)1);
  }

  void printRow(int row, char* text) {
    char line[17];

    sprintf(line, "%-16s", text);
    lcd.setCursor(0, row);
    lcd.print(line);
  }  

  void setup() {
    lcd.begin(16,2);

    byte thermopic[8] = //thermometer icon
  {
    0b00100,
    0b01010,
    0b01010,
    0b01010,
    0b01110,
    0b11111,
    0b11111,
    0b01110
  };

  byte waterpic[8] = //water icon
  {
    0b00100,
    0b00100,
    0b01010,
    0b01010,
    0b10001,
    0b10001,
    0b10001,
    0b01110
  };
  
  // create a new custom character
    lcd.createChar(0, thermopic);
    lcd.createChar(1, waterpic);
  }
  
  void printTemp() {
    char text[17];
  }

  void printHum() {
    char text[17];
  }
}
