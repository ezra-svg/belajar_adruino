const int ledA=2;
const int ledB=4;

void setup() {
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);

}

void loop() {
  for(int i=1; i<= 5; i++ ){
    digitalWrite(ledA,  HIGH);
    delay(1000);
    digitalWrite(ledA, LOW);
    delay(1000);
    return 0;
  }
  
  for(int i=1; i<=3; i++){
    digitalWrite(ledB, HIGH);
    delay(1000);
    digitalWrite(ledB, LOW);
    delay(1000);
    return 0;
  }

}
