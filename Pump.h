#ifndef PUMP_H
#define PUMP_H

#include <Lcd.h>
#include <Logger.h>

class Pump {

    Lcd lcd;

    Logger log;

    public:
        Pump(Lcd lcd, Logger log);

        void init();

        void toWater(int delays);

    private:
        void toWater(int sensor, int pump);
};

#endif