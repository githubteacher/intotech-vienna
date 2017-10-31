# GitHub Universe Workshop Day 2017
## GitHub and the Internet of Things: Automate IoT Hardware
Arduino and IoT information and code for GitHub Universe Workshop Day 2017

### Prerequisites
Before arriving to the workshop, please make sure you have the following items installed on your laptop:
- [Arduino IDE](https://www.arduino.cc/en/Main/Software)
- [PlatformIO](http://docs.platformio.org/en/latest/installation.html)
  - [Python 2.7](https://www.python.org/downloads/) - note that Python 3 will not work with PlatformIO
  - [Atom](https://atom.io/) with [PlatformIO package](http://platformio.org/get-started/ide?install) and [Clang](http://clang.llvm.org/) if required (Windows users)
- [Travis](https://docs.travis-ci.com/user/getting-started/) familiarity, especially for [C++](https://docs.travis-ci.com/user/languages/cpp/)
- [Liquid Crystal Library](https://www.arduino.cc/en/Reference/LiquidCrystal)
- [DHT Library](https://github.com/adafruit/DHT-sensor-library)

### Parts shopping list (to build at home if you want)
- 1 [16x2 Character LCD Display](https://vetco.net/products/16x2-character-lcd-display)
- 1 [400-point breadboard](https://vetco.net/products/400-point-breadboard) 
- 1 [Arduino-compatible Pro Micro*](https://vetco.net/products/arduino-compatible-pro-micro) 
  - *This Arduino requires soldering the header pins to the Arduino
- 1 [10k trim pot](https://vetco.net/products/10k-1-2w-25-turn-trim-potentiometer)
  - Note: this model is a 25-turn, versus the lower-turn number trim pots we used in the demo; either is fine, you just turn one more than the other--the important thing is is that it's 10k (20k would also work)
- 1 [330 Ohm resistor](https://vetco.net/products/330-ohm-1-4-watt-resistor)
  - Note: this model is a 1/4 watt, but you could use a smaller wattage if available; the LCD we're using wants about 300 Ohms
- 1 [DHT22 sensor](http://www.mouser.com/ProductDetail/Adafruit/385/?qs=sGAEpiMZZMsMyYRRhGMFNiK6mi%2f0qhAsScidaIcRRdw%3d)
  - DHT11 would work as well, but isn't as accurate
- 1 [22k Ohm resistor](https://vetco.net/products/22k-ohm-1-4-watt-resistor) for use with DHT22
- 1 [USB to micro USB cable](https://vetco.net/products/1-micro-usb-cable-a-usb-to-micro-usb-b) 
- 2 [male-male jumper jumper wire packs](https://vetco.net/products/7-male-male-rainbow-breadboard-jumper-wire-for-arduino-10-pack)
  - Can also be purchased [here](http://www.mouser.co.uk/ProductDetail/MikroElektronika/MIKROE-513/?qs=sGAEpiMZZMuCISx1W3tuzqgZjGmk8QdS)

### Libraries used for WeatherThing
- [Liquid Crystal Library](https://www.arduino.cc/en/Reference/LiquidCrystal)
- [DHT](https://github.com/adafruit/DHT-sensor-library)

### Code samples
- `HelloUniverse.ino` is located in the `HelloUniverse` directory
- `WeatherThing.ino` is located in the `WeatherThing` directory

### Cool projects resources
Great websites to find cool projects to build include:
- [hackster.io](https://www.hackster.io/)
- [diyhacking.com](https://diyhacking.com/diy-projects/arduino-projects/)
- [Arduino Playground](https://playground.arduino.cc/Projects/Ideas)

### Resources
- [Glyphduino library](http://rastating.github.io/Glyphduino/) - library with pre-made glyphs
- [Customer character generator](http://fusion94.org/lcdchargen/) - make your own custom glyphs in a web UI and get the code

### Slide deck
- [Slide deck](https://speakerdeck.com/allthedoll/github-and-the-internet-of-things-automate-iot-hardware-1) with instructions for assembly
