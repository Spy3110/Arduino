void setup() {
  Serial.begin(9600); // Start talking to your computer at 9600 bits/sec
}

void loop() {
  int sensorValue = analogRead(A0); // Ask the knob "what’s your number?"
  Serial.println(sensorValue); // Shout the number to your Serial Monitor
  delay(1);
}
