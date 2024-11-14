int trigPin=11;
int echoPin=10;
int led=2;

int duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  digitalWrite(trigPin, HIGH);
  delay (100);
  digitalWrite(trigPin, LOW);
  digitalWrite(led, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance=(duration/2)/28.5;
  
  if(distance == 0){
    Serial.print("DEKAT BANGET ");
    Serial.println(distance);
    digitalWrite(led, LOW );
  }
  else if(distance>=0 && distance<=10){
    Serial.print("DEKAT ");
    Serial.println(distance);
    digitalWrite(led, LOW);
  }
  else if(distance>=20 && distance<=50){
    Serial.print("DEKAT ");
    Serial.println(distance);
    digitalWrite(led, LOW);
  }  
  else if(distance>=50 && distance<=100){
    Serial.print("LUMAYAN JAUH ");
    Serial.println(distance);
    digitalWrite(led, HIGH);
  }
  else{
    Serial.print("JAUH ");
    Serial.println(distance);
    digitalWrite(led, HIGH);
  }
  
  
}
