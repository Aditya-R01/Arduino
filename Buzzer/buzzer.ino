const int buzzpin =9; 
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Produce a 100 Hz tone
    tone(buzzpin, 100);
    delay(200); // Wait for 200 milliseconds
    // Produce a 400 Hz tone
    tone(buzzpin, 400);
    delay(200); // Wait for 200 milliseconds
    // Produce a 600 Hz tone
    tone(buzzpin, 600);
    delay(200); // Wait for 200 milliseconds
    // Stop the tone
    noTone(buzzpin);
    delay(2000); // Wait for 2 seconds before repeating
}
