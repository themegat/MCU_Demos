
# ESP8266_MCP23017_Demo

This library is a basic demonstration of how to use a MCP23017 IO Expander with a ESP8266 D1 mini to blink a LED. 

## FYI 

**This library uses and has a depedency on the Adafruit_MCP23X17 library.**

The depedency has already been included in the *platformio.ini* configuration file.

## Usage

To run the demo:
 - Include ESP8266_MCP23017_Demo in the *main.cpp* file. 
 ```c++
    #include "ESP8266_MCP23017_Demo.h"
 ```
 - Then create an instance of ESP8266_MCP23017_Demo
 ```c++
    ESP8266_MCP23017_Demo demo;
 ```

 - Then in the setup method of the *main.cpp* file call setup of ESP8266_MCP23017_Demo
 ```c++
    void setup()
    {
      mcp23017Demo.setup();
    }
 ```

 - Then in the loop method of the *main.cpp* file call loop of ESP8266_MCP23017_Demo
 ```c++
    void loop()
    {
      mcp23017Demo.loop();
    }
 ```

 ## Schematic

 ![schematic](./docs/Schematic_MCU-Demos_2024-08-08.png)