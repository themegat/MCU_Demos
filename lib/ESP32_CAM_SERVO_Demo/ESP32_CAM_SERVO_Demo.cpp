#include <ESP32_CAM_SERVO_Demo.h>

#define SERVO_1 16 //can be 2, 12, 13, 14, 15, 16
#define SERVO_STEP 2

Servo servo;

int servoPosition = 0;

ESP32_CAM_SERVO_Demo::ESP32_CAM_SERVO_Demo() {}

void ESP32_CAM_SERVO_Demo::setup()
{
    Serial.begin(115200);

    pinMode(33, OUTPUT);

    servo.setPeriodHertz(50);
    servo1.attach(SERVO_1, 400, 2500); // setting is specific to the SG90 servo
    servo.write(servoPosition);

    Serial.println();
    Serial.println("ESP32_CAM_SERVO_Demo setup done.");
}

void ESP32_CAM_SERVO_Demo::loop()
{
    digitalWrite(33, LOW);
    while (servoPosition < 180)
    {
        servoPosition += SERVO_STEP;
        servo.write(servoPosition);
        delay(20);
    }
    delay(1000);
    digitalWrite(33, HIGH);
    while (servoPosition > 0)
    {
        servoPosition -= SERVO_STEP;
        servo.write(servoPosition);
        delay(20);
    }
}