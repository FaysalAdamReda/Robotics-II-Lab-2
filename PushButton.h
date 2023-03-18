


#ifndef PushButton_h
#define PushButton_h

#include "Arduino.h"

class PushButton {
  private:
    int _ledPin;
    int _buttonPin;
    int _buttonState;
    
  public:
    PushButton(int ledPin, int buttonPin);
    void readButton();
};

#endif
