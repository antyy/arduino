//Defining output pin
#define RED_PIN 9
#define POT_IN A0

void setup() {
 Serial.begin(9600);
 pinMode(RED_PIN, OUTPUT);
 pinMode(POT_IN, INPUT);
}

void writeWithDelay(int pinNumber, int power, int delayMS) {
  analogWrite(pinNumber, power);
  delay(delayMS);
}

void loop() {
  int power = analogRead(POT_IN);
  
  Serial.println( power, DEC);
  delay(100);
  writeWithDelay(RED_PIN, 85, 330);
  writeWithDelay(RED_PIN, 170, 330);
  writeWithDelay(RED_PIN, 255, 330); 
}
