AslFastPin
==========

## Simple example

How quickly can you get up and running with the library?  Here's a simple blink program:

	#include <AslFastPin.h>
	using namespace asl;
	void setup() { FastPin<13>::setOutput(); }
	void loop() {
        FastPin<13>::hi(); delay(500);
		FastPin<13>::lo(); delay(500);
	}


## Supported platforms

Right now the library is supported on a variety of arduino compatable platforms.  If it's ARM or AVR and uses the arduino software (or a modified version of it to build) then it is likely supported.  Note that we have a long list of upcoming platforms to support, so if you don't see what you're looking for here, ask, it may be on the roadmap (or may already be supported).  N.B. at the moment we are only supporting the stock compilers that ship with the arduino software.  Support for upgraded compilers, as well as using AVR studio and skipping the arduino entirely, should be coming in a near future release.

* Arduino & compatibles - straight up arduino devices, uno, duo, leonardo, mega, nano, etc...
* Arduino Yún
* Adafruit Trinket & Gemma - Trinket Pro may be supported, but haven't tested to confirm yet
* Teensy 2, Teensy++ 2, Teensy 3.0, Teensy 3.1/3.2, Teensy LC - arduino compataible from pjrc.com with some extra goodies (note the teensy 3, 3.1, and LC are ARM, not AVR!)
* Arduino Due and the digistump DigiX
* RFDuino
* SparkCore
* Arduino Zero
* ESP8266 using the arduino board definitions from http://arduino.esp8266.com/stable/package_esp8266com_index.json - please be sure to also read https://github.com/FastLED/FastLED/wiki/ESP8266-notes for information specific to the 8266.
* The wino board - http://wino-board.com

IMPORTANT NOTE: For AVR based systems, avr-gcc 4.8.x is supported and tested.  This means Arduino 1.6.5 and later.