#define STEP_PIN 2
#define DIR_PIN 3

void setup() {
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);
}

void loop() {

  // Giro horario
  digitalWrite(DIR_PIN, HIGH);

  for (int i = 0; i < 200; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(1000);

    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(1000);
  }

  delay(1000);

  // Giro antihorario
  digitalWrite(DIR_PIN, LOW);

  for (int i = 0; i < 200; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(1000);

    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(1000);
  }

  delay(1000);
}