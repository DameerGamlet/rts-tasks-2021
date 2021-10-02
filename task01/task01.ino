#define led3 3
#define led5 5
#define led6 6
#define led9 9
#define led10 10
#define led11 11

long interval3 = 50000, interval5 = 100000, interval6 = 200000, interval9 = 400000, interval10 = 800000, interval11 = 1600000;
int ledState = LOW;
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
  unsigned long currentMillis = micros();
  if (currentMillis - previousMillis3 >= interval3) {
    previousMillis3 = currentMillis;
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    digitalWrite(led3, ledState);
  }

  if (currentMillis - previousMillis5 >= interval5) {
    previousMillis5 = currentMillis;
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    digitalWrite(led5, ledState);
  }

  if (currentMillis - previousMillis6 >= interval6) {
    previousMillis6 = currentMillis;
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    digitalWrite(led6, ledState);
  }

  if (currentMillis - previousMillis9 >= interval9) {
    previousMillis9 = currentMillis;
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    digitalWrite(led9, ledState);
  }
  
  if (currentMillis - previousMillis10 >= interval10) {
    previousMillis10 = currentMillis;
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    digitalWrite(led10, ledState);
  }

  if (currentMillis - previousMillis11 >= interval11) {
    previousMillis11 = currentMillis;
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    digitalWrite(led11, ledState);
  }
}
