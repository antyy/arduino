//Defining output pin
#define RED_PIN 4

void setup() {
 pinMode(RED_PIN, OUTPUT);

}

void loop() {
  digitalWrite(RED_PIN, HIGH);
  delay(100);

  digitalWrite(RED_PIN, LOW);
  delay(900);
  
}
