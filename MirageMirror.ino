#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
char *myStrings[] = {"Look forward", "You're cool!", "Kindness is so ", "No one is you", "Be yourself", "You look great!", "Bogos binted?", "Live in the",
                    "You're awesome!", "To thine own", "You are enough", "You made it", "Escape the", "Follow your", "Create your", "Breathe and let", 
                    "Breathe dreams", "Go wild",  "You matter", "You can do", "You're so weird", "Try to walk in", "You are enough", "O be wise; what", 
                    "Be U Everyone", "You're guac"
                    };
char *myStrings2[] = {"With hope!", "       ", "gangster.", "              ", "             ", "            ", "               ", "moment",
                      "             ", "self be true", "          ", "this far", "Ordinary", "Heart", "own happiness", "it go", "like air",
                      "for a while", "          ", "Anything!", "(Don't Change)", "the light", "          ", "can I say more?" , "else is taken", 
                      "not free salsa!"  };
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.setCursor(0, 0);
  lcd.print("Mirage presents");
  lcd.setCursor(0, 1);
  lcd.print("Our Kind Mirror!");
  delay(5000);
  lcd.clear();
  delay(2000);
}

void loop() {
  for (int i = 0; i < 26; i++) {
    lcd.print(myStrings[i]);
    lcd.setCursor(0, 1);
    lcd.print(myStrings2[i]);
    delay(10000);
    if (i % 2 == 0 && i > 0) {
      lcd.clear();
    }
    lcd.clear();
  }

}
