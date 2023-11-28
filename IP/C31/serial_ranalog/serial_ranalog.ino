#define BAUD 9600
#define led 13
#define analog A0

String receivedString;
int sensorValue = 0;
char cstr[10];

void setup() {
  Serial.begin(BAUD);
  pinMode(led, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    int sensorValue = analogRead(analog);   
    sprintf(cstr, "%d\n", sensorValue);
    Serial.write(cstr);
    receivedString = Serial.readStringUntil('\n');
    if (receivedString.equals("on") || receivedString.equals("ON")) {
      digitalWrite(led, HIGH);
    }
    if (receivedString.equals("off") || receivedString.equals("OFF")) {
      digitalWrite(led, LOW);
    } 
  }
}
