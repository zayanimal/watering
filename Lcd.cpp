#include "Lcd.h"

Lcd::Lcd(LiquidCrystal_I2C lc) : lcd(lc) {};

void Lcd::init() {
    lcd.init();
    lcd.backlight();
}

void Lcd::show(int sensor, int readings) {
    lcd.setCursor(0, sensor);
    lcd.print("Gorshok ");
    lcd.print(sensor + 1);
    lcd.print(": ");
    lcd.print(readings);
}