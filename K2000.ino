void setup() {
  for (int pin = 8; pin <= 12; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  b(75);
  c(75);
}

void b(int a) {
  for (int pin = 8; pin < 13; pin++) {
    digitalWrite(pin, HIGH);
    delay(a);
    for (int pin = 8; pin < 13; pin++) {
      digitalWrite(pin, LOW);
    }
  }
}

void c(int a) {
  for (int pin = 12; pin > 7; pin--) {
    digitalWrite(pin, HIGH);
    delay(a);
    for (int pin = 12; pin > 7; pin--) {
      digitalWrite(pin, LOW);
    }
  }
}

