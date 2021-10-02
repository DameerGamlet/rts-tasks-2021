#define led3 3
#define led5 5
#define led6 6
#define led9 9
#define led10 10
#define led11 11

long interval3 = 50000, interval5 = 100000, interval6 = 200000, interval9 = 400000, interval10 = 800000, interval11 = 1600000;
int ledState3 = LOW, ledState5 = LOW, ledState6 = LOW, ledState9 = LOW, ledState10 = LOW, ledState11 = LOW;
unsigned long previousMillis3 = 0, previousMillis5 = 0, previousMillis6 = 0, previousMillis9 = 0, previousMillis10 = 0, previousMillis11 = 0;

void setup() {
  pinMode(led3, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
}

void loop() {
  unsigned long currentMillis3 = micros();
  if (currentMillis3 - previousMillis3 >= interval3) {
    previousMillis3 = currentMillis3;
    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }
    digitalWrite(led3, ledState3);
  }

    unsigned long currentMillis5 = micros();
  if (currentMillis5 - previousMillis5 >= interval5) {
    previousMillis5 = currentMillis5;
    if (ledState5 == LOW) {
      ledState5 = HIGH;
    } else {
      ledState5 = LOW;
    }
    digitalWrite(led5, ledState5);
  }

    unsigned long currentMillis6 = micros();
  if (currentMillis6 - previousMillis6 >= interval6) {
    previousMillis6 = currentMillis6;
    if (ledState6 == LOW) {
      ledState6 = HIGH;
    } else {
      ledState6 = LOW;
    }
    digitalWrite(led6, ledState6);
  }

    unsigned long currentMillis9 = micros();
  if (currentMillis9 - previousMillis9 >= interval9) {
    previousMillis9 = currentMillis9;
    if (ledState9 == LOW) {
      ledState9 = HIGH;
    } else {
      ledState9 = LOW;
    }
    digitalWrite(led9, ledState9);
  }

    unsigned long currentMillis10 = micros();
  if (currentMillis10 - previousMillis10 >= interval10) {
    previousMillis10 = currentMillis10;
    if (ledState10 == LOW) {
      ledState10 = HIGH;
    } else {
      ledState10 = LOW;
    }
    digitalWrite(led10, ledState10);
  }

    unsigned long currentMillis11 = micros();
  if (currentMillis11 - previousMillis11 >= interval11) {
    previousMillis11 = currentMillis11;
    if (ledState11 == LOW) {
      ledState11 = HIGH;
    } else {
      ledState11 = LOW;
    }
    digitalWrite(led11, ledState11);
  }
}
