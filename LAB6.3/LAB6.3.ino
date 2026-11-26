void setup() {
    Serial.begin(115200);
    int score[5] = {80, 45, 90, 35, 70, 51, 63, 78, 65, 12};
    for (int i = 0; i < 5; i++) {
        if (score[i] >= 50) {
            Serial.println("PASS");
        } else {
            Serial.println("FAIL");
        }
    }
}

void loop() {
}
