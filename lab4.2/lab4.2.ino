#define BT 17
void setup() {
    pinMode(BT, OUTPUT);
    Serial.begin(115200);

    int count = 1;
    do {
        Serial.println(count);
         digitalWrite(BT, LOW);
        delay(500);
        digitalWrite(BT, HIGH);
        delay(500);
        count++;
    } while (count <= 5);
}

void loop() {
}
