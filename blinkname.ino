// Pin for LED that will be blinked.
const pin_t LED = D7;

// Morse Code dot and dash durations.
// https://morsecode.world/international/morse2.html
//
// An extra MORSE_UNIT is subtracted because it is included in the dot and dash
// functions while still making it clear that they're defined the same as the
// standard.
const int MORSE_UNIT = 100;
const int DOT_DURATION = MORSE_UNIT;
const int DASH_DURATION = MORSE_UNIT * 3;
const int BETWEEN_COMPONENT_DURATION = MORSE_UNIT;
const int BETWEEN_CHARACTER_DURATION = MORSE_UNIT * 3 - MORSE_UNIT;  
const int BETWEEN_WORD_DURATION = MORSE_UNIT * 7 - MORSE_UNIT;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  // My name, Willem, is going to be blinked in Morse Code.

  // W: .--
  dot(); dash(); dash();
  delay(BETWEEN_CHARACTER_DURATION);

  // I: ..
  dot(); dot();
  delay(BETWEEN_CHARACTER_DURATION);

  // L: .-..
  dot(); dash(); dot(); dot();
  delay(BETWEEN_CHARACTER_DURATION);

  // L: .-..
  dot(); dash(); dot(); dot();
  delay(BETWEEN_CHARACTER_DURATION);

  // E: .
  dot();
  delay(BETWEEN_CHARACTER_DURATION);

  // M: --
  dash(); dash();
  delay(BETWEEN_CHARACTER_DURATION);

  delay(BETWEEN_WORD_DURATION);
}

void dot()
{
  digitalWrite(LED, HIGH);
  delay(DOT_DURATION);
  digitalWrite(LED, LOW);
  delay(BETWEEN_COMPONENT_DURATION);
}

void dash()
{
  digitalWrite(LED, HIGH);
  delay(DASH_DURATION);
  digitalWrite(LED, LOW);
  delay(BETWEEN_COMPONENT_DURATION);
}
