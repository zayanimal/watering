#ifndef LCD_H
#define LCD_H

#include <LiquidCrystal_I2C.h>

class Lcd {

    LiquidCrystal_I2C lcd;

    public:
        Lcd(LiquidCrystal_I2C lcd);

        void init();

        void show(int sensor, int readings);
};

#endif