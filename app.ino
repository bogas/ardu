unsigned int myLed = 8;
unsigned int myButton = 7;

bool prevButtonState = false;
bool buttonSwitch = true;

void setup() {
  pinMode(myLed, OUTPUT);
  pinMode(myButton, INPUT_PULLUP);
}
// the loop function runs over and over again forever
void loop() {
  bool currentButtonState = digitalRead(myButton);
  if (currentButtonState && !prevButtonState) {
    buttonSwitch = !buttonSwitch;
  }
  prevButtonState = currentButtonState;

  digitalWrite(myLed, buttonSwitch);
}
