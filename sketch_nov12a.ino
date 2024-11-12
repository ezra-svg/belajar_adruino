#define pb 5
#define led 2
#define led2 4

void setup(){
  pinMode(pb, INPUT_PULLUP);
}
void loop(){
 if (digitalRead(pb) == 0){
  digitalWrite(led, HIGH);
  digitalWrite(led2, LOW);
 }
  else{
  digitalWrite(led, LOW);
  digitalWrite(led2,HIGH);
  }
}