
int data = 3;
int latch = 4 ;
int cs = 5;
 
int datapins[4]= {11,10,9,8};
const byte digits[10] = {
B00111111,
B00000110,
B01011011,
B01001111,
B01100110,
B01101101,
B01111101,
B0000111,
B01111111,
B01101111,
};
 


void setup() {
  // put your setup code here, to run once:
  pinMode(latch, OUTPUT);
  pinMode(cs, OUTPUT);
  pinMode(data, OUTPUT);
  for (int j = 8; j <12; j++) 
  pinMode(j, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, LOW);

digitalWrite(latch, LOW);
  shiftOut(data, cs, MSBFIRST, digits[1]);
  digitalWrite(latch, HIGH);
////////////////////////////////////////////////////////////////////

digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);

digitalWrite(latch, LOW);
  shiftOut(data, cs, MSBFIRST, digits[2]);
  digitalWrite(latch, HIGH);
////////////////////////////////////////////////////////////////////

digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);

digitalWrite(latch, LOW);
  shiftOut(data, cs, MSBFIRST, digits[3]);
  digitalWrite(latch, HIGH);
///////////////////////////////////////////////////////////////////

digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);

digitalWrite(latch, LOW);
  shiftOut(data, cs, MSBFIRST, digits[4]);
  digitalWrite(latch, HIGH);

}
