#define PIN_LED 2
#define PIN_BUTTON 13
//the setup functions runs once when you press reset or power on the esp32 board
void setup() {
  //initialize digital PIN_LED as an output
  pin Mode (PIN_LED,OUTPUT);
  pin Mode (PIN_BUTTON,INPUT);
}

//the loop functions runs over and over again forever
void loop() { 
  // put your main code here, to run repeatedly:
if (digitalRead (PIN_BUTTON)==LOW) {
  delay(20);
  if(digitalRead (PIN_BUTTON)==LOW) {
    reverseGPIO(PIN_LED);
}
while (digitalRead(PIN_BUTTON)==LOW);
delay(20);
if(digitalRead(PIN_BUTTON)==LOW){
  reverseGPIO(PIN_LED);
}
while (digitalRead(PIN_BUTTON)==LOW);
delay(20);
if(digitalRead(PIN_BUTTON)==LOW)
  }
}
void reverseGPIO(int pin) {
  digitalWrite (pin, !digitalRead(pin));
}

