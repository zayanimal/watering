const int pump1 = 2;
const int pump2 = 3;
const int pump3 = 4;
const int pump4 = 5;

void setup() {
    pinMode(pump1, OUTPUT);
    pinMode(pump2, OUTPUT);
    pinMode(pump3, OUTPUT);
    pinMode(pump4, OUTPUT);

    Serial.begin(9600);
}

void loop() {
    toWater(0, pump1);
    toWater(1, pump2);
    toWater(2, pump3);
    toWater(3, pump4);

    delay(1000);
}

void toWater(int sensor, int pump) {
    int sensorReadings = analogRead(sensor);

    log(sensorReadings);

    if (sensorReadings > 250) {
        digitalWrite(pump, HIGH);
    } else {
        digitalWrite(pump, LOW);
    }
}

void log(int readings) {
    Serial.print(readings);
    Serial.print("\n");
}
