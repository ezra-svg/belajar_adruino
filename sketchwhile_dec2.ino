const int ledA= 2;
const int ledB= 4;
void setup() {
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);

}

void loop() {
  int i=1;
  while(i<=5){
    digitalWrite(ledA, HIGH);
    delay(1000);
    digitalWrite(ledA, LOW);
    delay(1000);
    i++;
  }
  int j=1;
  while(j<=3){
    digitalWrite(ledB, HIGH);
    delay(1000);
    digitalWrite(ledB, LOW);
    delay(1000);
    i++;
  }
}
