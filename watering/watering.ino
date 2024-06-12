#include <Lcd.h>
#include <Logger.h>
#include <Pump.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);
Lcd display(lcd);
Logger logger;
Pump pump(display, logger);

void setup() {
    pump.init();
}

void loop() {
    pump.toWater(1000);
}
