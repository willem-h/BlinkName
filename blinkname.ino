// Example code by Particle which can be found at
// https://docs.particle.io/tutorials/hardware-projects/hardware-examples/#code

// Pin for LED that will be blinked.
const pin_t LED = D7;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  digitalWrite(LED, HIGH);
  delay(1s);
  digitalWrite(LED, LOW);
  delay(1s);
}
