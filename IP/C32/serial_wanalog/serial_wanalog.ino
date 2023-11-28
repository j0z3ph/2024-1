#define BAUD 9600
#define led 11 // Analog
#define analog A0

String receivedString;
int sensorValue = 0;
int val = 0;
char cstr[10];

void setup() {
  Serial.begin(BAUD);
  pinMode(led, OUTPUT);
}

void loop() {
  sensorValue = analogRead(analog);  
  if (Serial.available() > 0) {
    receivedString = Serial.readStringUntil('\n');
    if(receivedString.equals("ack")) {
      sprintf(cstr, "%d\n", sensorValue);
      Serial.write(cstr);
    } else {
      val = atoi(receivedString.c_str());
    }
  }
  analogWrite(led, val);  
}
