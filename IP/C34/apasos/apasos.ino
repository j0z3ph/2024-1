#define BAUD 9600
#define PIN1 8
#define PIN2 9
#define PIN3 10
#define PIN4 11


String receivedString;
int pin = 0;

void setup() {
  Serial.begin(BAUD);
  pinMode(PIN1, OUTPUT); 
  pinMode(PIN2, OUTPUT); 
  pinMode(PIN3, OUTPUT); 
  pinMode(PIN4, OUTPUT); 
}

void loop() {
  if (Serial.available() > 0) {
    receivedString = Serial.readStringUntil('\n');
    if(receivedString.length() >= 4) {
      digitalWrite(PIN1, receivedString.charAt(0) == '1' ? HIGH : LOW); 
      digitalWrite(PIN2, receivedString.charAt(1) == '1' ? HIGH : LOW); 
      digitalWrite(PIN3, receivedString.charAt(2) == '1' ? HIGH : LOW); 
      digitalWrite(PIN4, receivedString.charAt(3) == '1' ? HIGH : LOW);     
    }
  }
}