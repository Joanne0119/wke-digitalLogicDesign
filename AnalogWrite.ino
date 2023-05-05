// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  int sensorRead=analogRead(A0);
  Serial.println(sensorRead);
  if(sensorRead < 500) sensorRead = 500;
  else if(sensorRead > 800) sensorRead = 800;
  int ledblink = map(sensorRead, 500, 800, 0, 255);
  analogWrite(9, ledblink);
  delay(1);
}
