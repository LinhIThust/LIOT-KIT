# 1 "c:\\Users\\Dong Quang Linh\\OneDrive\\Example_LIOT_KIT\\01Button\\Button\\Button.ino"

// constants won't change. They're used here to set pin numbers:
const int SW5 = 8; // the number of the pushbutton pin
const int SW6 = 9; // the number of the pushbutton pin
const int SW7 = 10; // the number of the pushbutton pin
const int ledPin = 13; // the number of the LED pin

// variables will change:

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, 0x1);
  // initialize the pushbutton pin as an input:
  //defaul Pull_up
  pinMode(SW5, 0x0);
  pinMode(4,0x1);
  pinMode(SW6, 0x0);
  pinMode(SW7, 0x0);
  Serial.begin(115200);
}

void speaker(int us){
  for(unsigned short i = 0; i < 500; i++){
    digitalWrite(4,0x1);
    _delay_us(100);
    digitalWrite(4,0x0);
    _delay_us(100);
  }
  _delay_ms(us);
}

void loop() {
  //speaker(500);
  static int buttonState_old = 1;
  int buttonState = digitalRead(SW5) & digitalRead(SW6) & digitalRead(SW7);
  if(buttonState != buttonState_old){
     if(digitalRead(SW5) == 0x0){
       Serial.println("SW 5");
     }
      if(digitalRead(SW6) == 0x0){
       Serial.println("SW 6");
     }
      if(digitalRead(SW7) == 0x0){
       Serial.println("SW 7");
     }
     buttonState_old = buttonState;
  }
}
