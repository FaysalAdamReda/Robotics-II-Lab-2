#include "SevenSegmentDisplay.h"
SevenSegmentDisplay display(2, 3, 4, 5, 6, 7, 8);

void setup() {
  // nothing to do here
}

void loop() {
  for (int i = 0; i < 10; i++) {
    display.displayDigit(i);
  }
}
