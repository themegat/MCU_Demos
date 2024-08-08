#ifndef __ESP8266_MCP23017_Demo_H__
#define __ESP8266_MCP23017_Demo_H__

// Wire and Adafruit_MCP23X17 libraries
#include <Wire.h>
#include <Adafruit_MCP23X17.h>

class ESP8266_MCP23017_Demo
{
private:
    Adafruit_MCP23X17 mcp;
public:
    ESP8266_MCP23017_Demo(/* args */);
    // Call this in the setup method of the main.cpp
    void setup();
    // Call this in the loop method of the main.cpp
    void loop();
};

#endif // __ESP8266_MCP23017_Demo_H__