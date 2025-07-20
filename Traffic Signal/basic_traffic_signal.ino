#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 8, 7, 6, 5, 3);  // Changed E pin from 1 to 8

const int Red = 10;
const int Yellow = 11;
const int Green = 12;
const int baud = 9600;
const int waitms = 5000;
const int ct = 9;

void setup() {
  pinMode(Red, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Green, OUTPUT);
  
  digitalWrite(Red, LOW);
  digitalWrite(Yellow, LOW);
  digitalWrite(Green, LOW);
  analogWrite(ct,75);
  Serial.begin(baud);
  lcd.begin(16, 2);
  lcd.print("Traffic Lights");
  delay(2000);
  lcd.clear();
}

void traffic() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Green Light: GO");
  digitalWrite(Green, HIGH);
  Serial.println("GREEN LED : ON, GO");
  delay(waitms);
  digitalWrite(Green, LOW);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Yellow: WAIT");
  digitalWrite(Yellow, HIGH);
  Serial.println("GREEN LED : OFF ; YELLOW LED : ON, WAIT");
  delay(waitms);
  digitalWrite(Yellow, LOW);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Red Light: STOP");
  digitalWrite(Red, HIGH);
  Serial.println("YELLOW LED : OFF ; RED LED : ON, STOP");
  delay(waitms);
  digitalWrite(Red, LOW);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Cycle Done");
  Serial.println("ALL OFF, WAIT FOR 10 SECONDS");
}

void loop() {
  traffic();
  delay(10000);
}
