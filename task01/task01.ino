#define led3 3
#define led5 5
#define led6 6
#define led9 9
#define led10 10
#define led11 11

long interval3 = 500000, 
     interval5 = 400000, 
     interval6 = 10000, 
     interval9 = 250000, 
     interval10 = 200000, 
     interval11 = 100000;
int ledState3 = LOW, ledState5 = LOW, ledState6 = LOW, ledState9 = LOW, ledState10 = LOW, ledState11 = LOW;
unsigned long previousMillis3 = 0, 
              previousMillis5 = 0, 
              previousMillis6 = 0, 
              previousMillis9 = 0, 
              previousMillis10 = 0, 
              previousMillis11 = 0;

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
    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }
    digitalWrite(led3, ledState3);
  }

  if (currentMillis - previousMillis5 >= interval5) {
    previousMillis5 = currentMillis;
    if (ledState5 == LOW) {
      ledState5 = HIGH;
    } else {
      ledState5 = LOW;
    }
    digitalWrite(led5, ledState5);
  }

  if (currentMillis - previousMillis6 >= interval6) {
    previousMillis6 = currentMillis;
    if (ledState6 == LOW) {
      ledState6 = HIGH;
    } else {
      ledState6 = LOW;
    }
    digitalWrite(led6, ledState6);
  }

  if (currentMillis - previousMillis9 >= interval9) {
    previousMillis9 = currentMillis;
    if (ledState9 == LOW) {
      ledState9 = HIGH;
    } else {
      ledState9 = LOW;
    }
    digitalWrite(led9, ledState9);
  }
  
  if (currentMillis - previousMillis10 >= interval10) {
    previousMillis10 = currentMillis;
    if (ledState10 == LOW) {
      ledState10 = HIGH;
    } else {
      ledState10 = LOW;
    }
    digitalWrite(led10, ledState10);
  }

  if (currentMillis - previousMillis11 >= interval11) {
    previousMillis11 = currentMillis;
    if (ledState11 == LOW) {
      ledState11 = HIGH;
    } else {
      ledState11 = LOW;
    }
    digitalWrite(led11, ledState11);
  }
}
