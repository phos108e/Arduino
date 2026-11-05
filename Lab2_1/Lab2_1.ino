int age = 15;
float temperature = 28.5;
char grade = 'A';
bool ledStatus = true;

void setup() {
    Serial.begin(115200);

    Serial.println("=== Variable Example ===");

    Serial.print("Age = ");
    Serial.println(age);

    Serial.print("Temperature = ");
    Serial.println(temperature);

    Serial.print("Grade = ");
    Serial.println(grade);

    Serial.print("LED Status = ");
    Serial.println(ledStatus);
}

int counter = 0;

void setup() {
    Serial.begin(115200);
}

void loop() {
    counter = counter + 1;

    Serial.print("Counter = ");
    Serial.println(counter);

    delay(1000);
}


