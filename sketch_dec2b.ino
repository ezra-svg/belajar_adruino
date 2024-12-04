const int ledA = 2;
const int ledB = 4;

void setup() {
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void loop() {
  // Pola 1: LED A berkedip 5 kali
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledA, HIGH);
    delay(500); // Kedip cepat
    digitalWrite(ledA, LOW);
    delay(500);
  }

  // Pola 2: LED B berkedip 3 kali dengan jeda lebih lama
  for (int i = 0; i < 3; i
