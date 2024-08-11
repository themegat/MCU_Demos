
# ESP32_IO_Tester

This a ESP32 IO testing library, to test which pins are availble to be used as either input or output. 

## Usage

To run the demo:
 - Include ESP32_IO_Tester in the *main.cpp* file. 
 ```c++
    #include "ESP32_IO_Tester.h"
 ```
 - Then in setup create a vector with the pins of the specific ESP32 board to test and call the whichAnalogPins() method to test the pins, specifying the MODE to test for.
 ```c++
   void setup()
    {
      std::vector<int> boardPins;

      boardPins.push_back(7);
      boardPins.push_back(8);

      ESP32_IO_Tester::whichAnalogPins(boardPins, OUTPUT);
    }
 ```