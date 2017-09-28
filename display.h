#ifndef DISPLAY_H
#define DISPLAY_H

namespace Display {
  void setup();
  void displayTemp(int);
  void displayHum(int);
  void printTemp();
  void printHum();  
  void clearScreen();  
  void printRow(int, char*);
}

#endif
