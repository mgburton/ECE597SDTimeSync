void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
}

void loop() { // Outputs a 500 Hz square wave
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(9, LOW);
  delay(100);
}
