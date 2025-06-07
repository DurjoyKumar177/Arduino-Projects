const int Led1 = 10;
const int Led2 = 12;
int count = 100;

void setup() {
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
}

void loop() {
  for (int i = 0; i < count; i++) {
    digitalWrite(Led2, HIGH);
    delay(50);
    digitalWrite(Led2, LOW);
    delay(50);
  }

  for (int i = 0; i < count; i++) {
    digitalWrite(Led1, HIGH);
    delay(50);
    digitalWrite(Led1, LOW);
    delay(50);
  }

  // Stop the program by going into an infinite idle loop
  while (true) {
    // Optionally, sleep or blink a LED once to show it's finished
  }
}
