#include "ESP8266_MCP23017_Demo.h"

ESP8266_MCP23017_Demo::ESP8266_MCP23017_Demo() {}

void ESP8266_MCP23017_Demo::setup()
{
    Serial.begin(9600);
    Serial.println("");
    // Initialize the MCP23017 with the I2C address 0x20
    if (!mcp.begin_I2C(0x20))
    {
        Serial.println("Error: MCP23017 not found.");
        while (1);
    }
    Serial.println("MCP23017 found.");

    // Set pin GPA0 (pin 21 on the MCP23017) as an output
    mcp.pinMode(0, OUTPUT);

    // Turn the LED off initially
    mcp.digitalWrite(0, LOW);
}

void ESP8266_MCP23017_Demo::loop()
{
    // Blink the LED every second
    mcp.digitalWrite(0, HIGH); // Turn the LED on
    delay(1000);               // Wait for a second
    mcp.digitalWrite(0, LOW);  // Turn the LED off
    delay(1000);               // Wait for a second
}