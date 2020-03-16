/* 
* This is the Useless Box

* The intention is to create a device that, in response to 
pressing a push buttton, will be upset that you dared push the
button, and will urge you to please leave it alone

*/

int LED_START_ = 10;

int PUSHBUTTON = 2;

int buttonState = 0;

int lastButtonState = 0;

int buttonPushCounter = 0;

//shift register 1 
int latchPin = 5;
int clockPin = 6;
int dataPin = 4;
 
byte leds = 0;

void setup() {

  //pushbutton
  pinMode(LED_START_, OUTPUT);
  pinMode(PUSHBUTTON, INPUT);

  //shift register 1
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
  
  Serial.begin(9600);

}

void loop() {

  // read the pushbutton input pin
  buttonState = digitalRead(2);

  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      // if the current state is HIGH, then the button
      // went from off to on
      buttonPushCounter += 1;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);
      
    } else {
      // if the current state is LOW, then the button
      // went from on to off
      Serial.println("off");
      
    }
    // delay a little bit to avoid debouncing
    delay(5); // Wait for 5 millisecond(s)
  }
  // save the current state as the last state, for
  // the next time through the loop
  lastButtonState = buttonState;
  

  if (buttonPushCounter % 2 != 0) {
    digitalWrite(LED_START_, HIGH);
  } else {
    digitalWrite(LED_START_, LOW);
  }
firstShifty();

}

void firstShifty() 
{
  leds = 0;
  updateShiftRegister();
  delay(500);
  for (int i = 0; i < 8; i++)
  {
    bitSet(leds, i);
    updateShiftRegister();
    delay(500);
  }
}
 
void updateShiftRegister()
{
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}
