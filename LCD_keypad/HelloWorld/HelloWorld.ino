#include <LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
//              (RS, E, D4, D5, D6, D7) 
LiquidCrystal lcd(13,12,11,10,9,8);

void setup() {
  lcd.begin(16, 2);  // set up the LCD's number of columns and rows:
  lcd.print("hello, world!");   // Print a message to the LCD.
}
void loop() {
  lcd.setCursor(0, 1);// set the cursor to column 0, line 1 (second line)
  lcd.print(millis() / 1000); // print the number of seconds since reset:
}
