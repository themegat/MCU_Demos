
# ESP32_CAM_SERVO_Demo

This library is a basic demonstration of how to control a servo motor using the ESP32 camera module. 

## FYI 

**This library uses and has a depedency on the ESP32Servo library.**

The depedency has already been included in the *platformio.ini* configuration file.

**The SG90 servo motor was used for testing.**

## Usage

To run the demo:
 - Include ESP32_CAM_SERVO_Demo in the *main.cpp* file. 
 ```c++
    #include "ESP32_CAM_SERVO_Demo.h"
 ```
 - Then create an instance of ESP32_CAM_SERVO_Demo
 ```c++
    ESP32_CAM_SERVO_Demo demo;
 ```

 - Then in the setup method of the *main.cpp* file call setup of ESP32_CAM_SERVO_Demo
 ```c++
    void setup()
    {
      demo.setup();
    }
 ```

 - Then in the loop method of the *main.cpp* file call loop of ESP32_CAM_SERVO_Demo
 ```c++
    void loop()
    {
      demo.loop();
    }
 ```