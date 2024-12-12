// ESP32 Touch Test
// Just test touch pin - Touch0 is T0 which is on GPIO 4.


void setup() {
  Serial.begin(115200);
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(22, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(17, OUTPUT);
}

void loop() {
  if (touchRead(27) < 55) {
    digitalWrite(25, HIGH);
  } else {
    digitalWrite(25, LOW);
  }

  if(touchRead(33) < 55) {
    digitalWrite(26, HIGH);
  } else {
    digitalWrite(26, LOW);
  }

  if(touchRead(32) < 55) {
    digitalWrite(22, HIGH);
  } else {
    digitalWrite(22, LOW);
  }

  if(touchRead(12) < 55) {
    digitalWrite(21, HIGH);
  } else {
    digitalWrite(21, LOW);
  }

  if(touchRead(13) < 55) {
    digitalWrite(17, HIGH);
  } else {
    digitalWrite(17, LOW);
  }
}