// Pin for LED that will be blinked.
const pin_t LED = D7;

// Morse Code dot and dash durations.
// https://morsecode.world/international/morse2.html
const int MORSE_UNIT = 100;
const int DOT_DURATION = MORSE_UNIT;
const int DASH_DURATION = MORSE_UNIT * 3;
const int BETWEEN_COMPONENT_DURATION = MORSE_UNIT;
const int BETWEEN_CHARACTER_DURATION = MORSE_UNIT * 3;
const int BETWEEN_WORD_DURATION = MORSE_UNIT * 7;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  // My name, Willem, is going to be blinked in Morse Code.

  // W: .--
  dot(); delay(BETWEEN_COMPONENT_DURATION); dash(); delay(BETWEEN_COMPONENT_DURATION); dash();
  delay(BETWEEN_CHARACTER_DURATION);

  // I: ..
  dot(); delay(BETWEEN_COMPONENT_DURATION); dot();
  delay(BETWEEN_CHARACTER_DURATION);

  // L: .-..
  dot(); delay(BETWEEN_COMPONENT_DURATION); dash(); delay(BETWEEN_COMPONENT_DURATION); dot(); delay(BETWEEN_COMPONENT_DURATION); dot();
  delay(BETWEEN_CHARACTER_DURATION);

  // L: .-..
  dot(); delay(BETWEEN_COMPONENT_DURATION); dash(); delay(BETWEEN_COMPONENT_DURATION); dot(); delay(BETWEEN_COMPONENT_DURATION); dot();
  delay(BETWEEN_CHARACTER_DURATION);

  // E: .
  dot();
  delay(BETWEEN_CHARACTER_DURATION);

  // M: --
  dash(); delay(BETWEEN_COMPONENT_DURATION); dash();
  delay(BETWEEN_CHARACTER_DURATION);

  delay(BETWEEN_WORD_DURATION);
}

void dot()
{
  digitalWrite(LED, HIGH);
  delay(DOT_DURATION);
  digitalWrite(LED, LOW);
}

void dash()
{
  digitalWrite(LED, HIGH);
  delay(DASH_DURATION);
  digitalWrite(LED, LOW);
}
