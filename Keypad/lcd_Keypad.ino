#include <Wire.h> 
#include <Keypad.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);


// Define the Keypad layout
const byte ROWS = 4; // Four rows
const byte COLS = 3; // Three columns
char keys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};

byte rowPins[ROWS] = {2,3,4,5};    // Connect to the row pins of the keypad
byte colPins[COLS] = {6,7,8}; // Connect to the column pins of the keypad

// Create the Keypad object
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Enter: ");
}

void loop() {
  // put your main code here, to run repeatedly:
  char key = keypad.getKey();

  if (key) {
    // Print the key value on the LCD
    lcd.setCursor(0, 1);
    lcd.print(key);
    delay(1000); // Delay for readability
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Enter: ");
  }
}
