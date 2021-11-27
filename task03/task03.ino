const int pinEnable = 8; 
const int pinStep = 2;   
const int pinDir = 5;    

void setup() {
  pinMode(pinEnable, OUTPUT);
  pinMode(pinStep, OUTPUT);
  pinMode(pinDir, OUTPUT);
  digitalWrite(pinEnable, LOW);
}

void loop() {
  digitalWrite(pinDir, HIGH);
  for (int x = 0; x < 4000; x++) {
    digitalWrite(pinStep, HIGH);
    delayMicroseconds(50);
    digitalWrite(pinStep, LOW);
    delayMicroseconds(50);
  }
  delay(350);

  digitalWrite(pinDir, LOW);
  for (int x = 0; x < 4000; x++) {
    digitalWrite(pinStep, HIGH);
    delayMicroseconds(50);
    digitalWrite(pinStep, LOW);
    delayMicroseconds(50);
  }
  delay(350);
  digitalWrite(pinEnable, HIGH);
  delay(350);
  digitalWrite(pinEnable, LOW);
}
