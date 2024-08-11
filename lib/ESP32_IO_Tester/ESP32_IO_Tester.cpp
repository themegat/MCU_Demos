#include "ESP32_IO_Tester.h"

void ESP32_IO_Tester::whichAnalogPins(std::vector<int> &pins, uint8_t mode)
{
    Serial.begin(9600);
    Serial.println();

    String modeStr = mode == OUTPUT ? "OUTPUT" : "INPUT";
    Serial.println("Testing pins for Analog Mode: " + modeStr);
    Serial.println("Total pins to test: " + String(pins.size()));
    int delayMs = 100;
    for (int pin : pins)
    {
        Serial.print("Testing Pin: " + String(pin));
        Serial.println();
        delay(delayMs);
        pinMode(pin, mode);
        delay(delayMs);
        if (mode == OUTPUT)
        {
            analogWrite(pin, 0);
        }
        Serial.print("============================");
        Serial.println();
    }
}