const int PUMP_1 = 2;
const int PUMP_2 = 3;
const int PUMP_3 = 4;

const int IS_DRY = 240;

void setup() {
    pinMode(PUMP_1, OUTPUT);
    pinMode(PUMP_2, OUTPUT);
    pinMode(PUMP_3, OUTPUT);

    Serial.begin(9600);
}

void loop() {
    toWater(0, PUMP_1);
    toWater(1, PUMP_2);
    toWater(2, PUMP_3);

    delay(1000);
}

void toWater(int sensor, int pump) {
    int sensorReadings = analogRead(sensor);

    log(sensor, sensorReadings);

    if (sensorReadings > IS_DRY) {
        digitalWrite(pump, LOW);
    } else {
        digitalWrite(pump, HIGH);
    }
}

void log(int sensor, int sensorReadings) {
    Serial.print("Sensor ");
    Serial.print(sensor);
    Serial.print(": ");
    Serial.println(sensorReadings);
}