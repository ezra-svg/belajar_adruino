int pingPin = 7;
int ledPin=2;
int threshold = 10;

void setup() {
 
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  
  long duration, inches, cm;

  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);

  
  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);

  
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);

  if(cm<duration){
    digitalWrite(ledPin, LOW);
  }
  else{
    digitalWrite(ledPin, HIGH);
  }
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();

  delay(100);
}

long microsecondsToInches(long microseconds) {
    return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
  
  return microseconds / 29 / 2;
}
