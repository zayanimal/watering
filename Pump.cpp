#include <Pump.h>
#include "Arduino.h"

Pump::Pump(Lcd lcd, Logger log) : lcd(lcd), log() {};

const int PUMP_1 = 2;
const int PUMP_2 = 3;
const int PUMP_3 = 4;

const int IS_DRY = 240;

void Pump::init() {
    pinMode(PUMP_1, OUTPUT);
    pinMode(PUMP_2, OUTPUT);
    pinMode(PUMP_3, OUTPUT);

    lcd.init();
    log.init();
}

void Pump::toWater(int delays) {
    toWater(0, PUMP_1);
    toWater(1, PUMP_2);
    toWater(2, PUMP_3);

    delay(delays);
}

void Pump::toWater(int sensor, int pump) {
    int sensorReadings = analogRead(sensor);

    lcd.show(sensor, sensorReadings);
    log.info(sensor, sensorReadings);

    if (sensorReadings > IS_DRY) {
        digitalWrite(pump, LOW);
    } else {
        digitalWrite(pump, HIGH);
    }
}