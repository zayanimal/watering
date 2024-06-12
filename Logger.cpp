#include "Arduino.h"
#include <Logger.h>

Logger::Logger() {};

void Logger::init() {
    Serial.begin(9600);
}

void Logger::info(int sensor, int sensorReadings) {
    Serial.print("Sensor ");
    Serial.print(sensor);
    Serial.print(": ");
    Serial.println(sensorReadings);
}