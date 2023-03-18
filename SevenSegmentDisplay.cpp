#include "SevenSegmentDisplay.h"

SevenSegmentDisplay::SevenSegmentDisplay(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG) {
  _segments[0] = pinA;
  _segments[1] = pinB;
  _segments[2] = pinC;
  _segments[3] = pinD;
  _segments[4] = pinE;
  _segments[5] = pinF;
  _segments[6] = pinG;

  int digitsArray[10][7] = {
    {1,1,1,1,1,1,0},  // 0
    {0,1,1,0,0,0,0},  // 1
    {1,1,0,1,1,0,1},  // 2
    {1,1,1,1,0,0,1},  // 3
    {0,1,1,0,0,1,1},  // 4
    {1,0,1,1,0,1,1},  // 5
    {1,0,1,1,1,1,1},  // 6
    {1,1,1,0,0,0,0},  // 7
    {1,1,1,1,1,1,1},  // 8
    {1,1,1,1,0,1,1}   // 9
  };
  
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 7; j++) {
      _digits[i][j] = digitsArray[i][j];
    }
  }
  
  for (int i = 0; i < 7; i++) {
    pinMode(_segments[i], OUTPUT);
  }
}

void SevenSegmentDisplay::displayDigit(int digit) {
  if (digit < 0 || digit > 9) {
    return;
  }
  int* digitArray = _digits[digit];
  for (int i = 0; i < 7; i++) {
    digitalWrite(_segments[i], digitArray[i]);
  }
  delay(2000);
}
