
void setup() {
  Serial.begin(9600);
}

void loop() {
  int a = 1;
  for (int i = 0; i < 5; i++)
  {
    a = a + i;
    Serial.println(a);
    delay(500);
  }
}

