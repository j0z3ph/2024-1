#define BAUD 9600
#define btn1 8
#define btn2 9

int buttonState1 = 0;
int buttonState2 = 0;

void setup() {
  Serial.begin(BAUD);
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
}

void loop() {
  buttonState1 = digitalRead(btn1);
  buttonState2 = digitalRead(btn2);
  
  if (buttonState1 == HIGH && buttonState2 == HIGH) {
    Serial.write("11\n");
  } else if (buttonState1 == LOW && buttonState2 == LOW) {
    Serial.write("00\n");
  } else if (buttonState1 == HIGH && buttonState2 == LOW) {
    Serial.write("10\n");
  } else {
    Serial.write("01\n");
  }
}