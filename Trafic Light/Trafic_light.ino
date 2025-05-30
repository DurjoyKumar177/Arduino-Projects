//LED pins
const int redPin = 8;
const int yellowPin = 9;
const int greenPin = 10;

void setup() {
  // Set LED pins as output
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // Green Light ON (Go)
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, LOW);
  delay(10000);  // 5 seconds

  // Yellow Light ON (Prepare to stop)
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(redPin, LOW);
  delay(2000);  // 2 seconds

  // Red Light ON (Stop)
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, HIGH);
  delay(5000);  // 5 seconds

   // Yellow Light ON (Prepare to stop)
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(redPin, LOW);
  delay(2000);  // 2 seconds
  
}
