
#include "PushButton.h"
void setup() {
PushButton myButton(13, 2);
}

void loop() {
  myButton.readButton();
}
