
#ifndef SEVENSEGMENTDISPLAY_H
#define SEVENSEGMENTDISPLAY_H

#include <Arduino.h>

class SevenSegmentDisplay {
  private:
    int _segments[7];
    int _digits[10][7];
  public:
    SevenSegmentDisplay(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG);
    void displayDigit(int digit);
};

#endif
  
