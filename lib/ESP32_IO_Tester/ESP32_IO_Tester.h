#ifndef __ESP32_IO_TESTER_H__
#define __ESP32_IO_TESTER_H__

#include <Arduino.h>
#include <vector>

class ESP32_IO_Tester
{
public:
    static void whichAnalogPins(std::vector<int> &analogPins, uint8_t mode);
};

#endif // __ESP32_IO_TESTER_H__