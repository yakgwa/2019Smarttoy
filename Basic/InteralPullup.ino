
void setup() {
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int a;
  a = digitalRead(2);
  Serial.println(a);
  delay(200);
}

