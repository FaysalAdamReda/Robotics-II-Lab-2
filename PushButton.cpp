


#include "PushButton.h"

PushButton::PushButton(int ledPin, int buttonPin) {
  _ledPin = ledPin;
  _buttonPin = buttonPin;
  _buttonState = LOW;
  pinMode(_ledPin, OUTPUT);
  pinMode(_buttonPin, INPUT_PULLUP);
}

void PushButton::readButton() {
  _buttonState = digitalRead(_buttonPin);
  if (_buttonState == LOW) {
    digitalWrite(_ledPin, HIGH);
  } else {
    digitalWrite(_ledPin, LOW);
  }
}
