#define segA 2
#define segB 3
#define segC 4
#define segD 5
#define segE 6
#define segF 7
#define segG 8
#define buzz 9

int COUNT = 0;

void setup() {
  for (int i = 2; i <= 9; i++) {
    pinMode(i, OUTPUT);
  }
}

void displayDigit(bool A, bool B, bool C, bool D, bool E, bool F, bool G) {
  digitalWrite(buzz, HIGH);
  digitalWrite(segA, A);
  digitalWrite(segB, B);
  digitalWrite(segC, C);
  digitalWrite(segD, D);
  digitalWrite(segE, E);
  digitalWrite(segF, F);
  digitalWrite(segG, G);
  digitalWrite(buzz, LOW);
}
//FOR COMMON CATHODE
/*void loop() {
  switch(COUNT) {
    case 0: displayDigit(1,1,1,1,1,1,0); break;
    case 1: displayDigit(0,1,1,0,0,0,0); break;
    case 2: displayDigit(1,1,0,1,1,0,1); break;
    case 3: displayDigit(1,1,1,1,0,0,1); break;
    case 4: displayDigit(0,1,1,0,0,1,1); break;
    case 5: displayDigit(1,0,1,1,0,1,1); break;
    case 6: displayDigit(1,0,1,1,1,1,1); break;
    case 7: displayDigit(1,1,1,0,0,0,0); break;
    case 8: displayDigit(1,1,1,1,1,1,1); break;
    case 9: displayDigit(1,1,1,1,0,1,1); break;
    default: COUNT = 0; break;
  }*/
//FOR COMMON ANODE
void loop() {
  switch(COUNT) {
    case 0: displayDigit(0,0,0,0,0,0,1); break;
    case 1: displayDigit(1,0,0,1,1,1,1); break;
    case 2: displayDigit(0,0,1,0,0,1,0); break;

    case 3: displayDigit(0,0,0,0,1,1,0); break;
    case 4: displayDigit(1,0,0,1,1,0,0); break;
    case 5: displayDigit(0,1,0,0,1,0,0); break;
    case 6: displayDigit(0,1,0,0,0,0,0); break;
    case 7: displayDigit(0,0,0,1,1,1,1); break;
    case 8: displayDigit(0,0,0,0,0,0,0); break;
    case 9: displayDigit(0,0,0,0,1,0,0); break;
    default: COUNT = 0; break;
  }
  COUNT = (COUNT + 1) % 10;
  delay(1000);
}
