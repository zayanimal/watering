#ifndef LOGGER_H
#define LOGGER_H

class Logger {

    public:
        Logger();

        void init();

        void info(int sensor, int sensorReadings);
};

#endif