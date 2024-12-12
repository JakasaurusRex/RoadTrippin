// ESP32 Touch Test
// Just test touch pin - Touch0 is T0 which is on GPIO 4.

#define SENSITIVITY 50

#define State1LED 25
#define State1Touch 27
int State1On = 0;
int State1Changed = 0;

#define State2LED 26
#define State2Touch 33
int State2On = 0;
int State2Changed = 0;

#define State3LED 22
#define State3Touch 32
int State3On = 0;
int State3Changed = 0;

#define State4LED 21
#define State4Touch 12
int State4On = 0;
int State4Changed = 0;

#define State5LED 17
#define State5Touch 13
int State5On = 0;
int State5Changed = 0;

void setup() {
  Serial.begin(115200);
  pinMode(State1LED, OUTPUT);
  pinMode(State2LED, OUTPUT);
  pinMode(State3LED, OUTPUT);
  pinMode(State4LED, OUTPUT);
  pinMode(State5LED, OUTPUT);
}

void loop() {
  /* State 1 */
  // Check for changes in touch value - if enough time has passed switch LED
  if (touchRead(State1Touch) < SENSITIVITY) {
    if(State1Changed + 500 < millis()) {
      State1On = State1On ? 0 : 1;
      State1Changed = millis();
    }
  }

  // set LED value based on previous 
  if(State1On) {
    digitalWrite(State1LED, HIGH);
  } else {
    digitalWrite(State1LED, LOW);
  }

  /* State 2 */
  if (touchRead(State2Touch) < SENSITIVITY) {
    if(State2Changed + 500 < millis()) {
      State2On = State2On ? 0 : 1;
      State2Changed = millis();
    }
  }

  if(State2On) {
    digitalWrite(State2LED, HIGH);
  } else {
    digitalWrite(State2LED, LOW);
  }

  /* State 3 */
  // Check for changes in touch value - if enough time has passed switch LED
  if (touchRead(State3Touch) < SENSITIVITY) {
    if(State3Changed + 500 < millis()) {
      State3On = State3On ? 0 : 1;
      State3Changed = millis();
    }
  }

  // set LED value based on previous 
  if(State3On) {
    digitalWrite(State3LED, HIGH);
  } else {
    digitalWrite(State3LED, LOW);
  }

  /* State 4 */
  // Check for changes in touch value - if enough time has passed switch LED
  if (touchRead(State4Touch) < SENSITIVITY) {
    if(State4Changed + 500 < millis()) {
      State4On = State4On ? 0 : 1;
      State4Changed = millis();
    }
  }

  // set LED value based on previous 
  if(State4On) {
    digitalWrite(State4LED, HIGH);
  } else {
    digitalWrite(State4LED, LOW);
  }

  /* State 5 */
  // Check for changes in touch value - if enough time has passed switch LED
  if (touchRead(State5Touch) < SENSITIVITY) {
    if(State5Changed + 500 < millis()) {
      State5On = State5On ? 0 : 1;
      State5Changed = millis();
    }
  }

  // set LED value based on previous 
  if(State5On) {
    digitalWrite(State5LED, HIGH);
  } else {
    digitalWrite(State5LED, LOW);
  }
}