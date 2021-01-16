//const byte ledPin = 13;
//const byte SW5 = 8;
//const byte SW6 = 9;
//const byte SW7 = 10;
//volatile byte state = LOW;
//void log(String s) {
//  state = !state;
//}
//void setup() {
//  pinMode(ledPin, OUTPUT);
//  pinMode(SW5, INPUT_PULLUP);
//  pinMode(SW6, INPUT_PULLUP);
//  pinMode(SW7, INPUT_PULLUP);
//  attachInterrupt(digitalPinToInterrupt(SW5), log("SW555"), CHANGE);
////  attachInterrupt(digitalPinToInterrupt(SW6), log("SW666"), CHANGE);
////  attachInterrupt(digitalPinToInterrupt(SW7), log("SW777"), CHANGE);
//}
//
//void loop() {
//  digitalWrite(ledPin, state);
//}
//

const byte ledPin = 13;
const byte interruptPin = 8;
volatile int state = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE);
}

void loop() {
  Serial.println(state);
}

void blink() {
  state = random();
}
