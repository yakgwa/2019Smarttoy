int a = 2;
int b = 3;
int c;

void setup() {
  Serial.begin(9600);
  c = a + b;
  if (c > 0) {
    Serial.println("Negative");
  }
  else if (c == 0) {
    Serial.println("Zero");
  }
  else {
    Serial.println("Positive");
  }
}

void loop() {
}

