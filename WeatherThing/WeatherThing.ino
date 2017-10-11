#include "display.h"
#include "sensor.h"
#include <LiquidCrystal.h>  // Arduino LCD library
#include <Arduino.h>  // enables use of byte pics

void setup() {
  Display::setup();
  Sensor::setup();
}

void loop() {
  int temp = Sensor::readTemp();
  int hum = Sensor::readHum();
  Display::displayTemp(temp);
  Display::displayHum(hum);
  delay(3000);  

}
