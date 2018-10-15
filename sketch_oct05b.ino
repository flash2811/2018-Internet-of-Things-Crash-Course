
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
//  int blinkRate = 500;
//  for(int i = 0; i < 10; i++){
//    digitalWrite(LED_BUILTIN, HIGH);
//    delay(blinkRate);
//    blinkRate += 500;
//    
//    digitalWrite(LED_BUILTIN, LOW);
//    delay(blinkRate);
//
//  }
//
//  for(int i = 0; i < 10; i++){
//    digitalWrite(LED_BUILTIN, HIGH);
//    delay(blinkRate);
//    blinkRate -= 500;
//    
//    digitalWrite(LED_BUILTIN, LOW);
//    delay(blinkRate);
//
//  }

int incomingByte = 0;

if (Serial.available() > 0) {
                // read the incoming byte:
                incomingByte = Serial.read();
                digitalWrite(LED_BUILTIN, HIGH);
                delay(1000);
                }
if (Serial.available() > 0) {
        digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}
}
