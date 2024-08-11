#include <ESP8266_MCP23017_Demo.h>

#include <vector>
#include <ESP32_IO_Tester.h>

// ESP8266_MCP23017_Demo - Create an instance of the demo
// ESP8266_MCP23017_Demo mcp23017Demo;

void testESP32PicoDevKitM2ForAnalogPins();

void setup()
{
  // ESP8266_MCP23017_Demo setup
  //  mcp23017Demo.setup();

  // ESP32_IO_Tester
  testESP32PicoDevKitM2ForAnalogPins();
}

void loop()
{
  // ESP8266_MCP23017_Demo loop
  //  mcp23017Demo.loop();
}

void testESP32PicoDevKitM2ForAnalogPins()
{
  // Adding pins 1 and 23 cause the board to reset
  std::vector<int> boardPins;

  boardPins.push_back(0);

  for (int i = 2; i <= 5; i++)
  {
    boardPins.push_back(i);
  }

  boardPins.push_back(7);
  boardPins.push_back(8);

  for (int i = 12; i <= 15; i++)
  {
    boardPins.push_back(i);
  }

  for (int i = 19; i <= 22; i++)
  {
    boardPins.push_back(i);
  }

  for (int i = 25; i <= 27; i++)
  {
    boardPins.push_back(i);
  }

  for (int i = 32; i <= 39; i++)
  {
    boardPins.push_back(i);
  }

  ESP32_IO_Tester::whichAnalogPins(boardPins, OUTPUT);
}