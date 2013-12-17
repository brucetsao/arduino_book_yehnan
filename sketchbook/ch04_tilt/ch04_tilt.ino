#define LED_PIN 11
#define TILT_PIN 7 // 傾斜感測器連接腳位

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(TILT_PIN, INPUT);
}
void loop() {
  boolean s = digitalRead(TILT_PIN);
  digitalWrite(LED_PIN, s);
}

