int rainPin = A0;     // Rain sensor analog pin
int ledPin = 3;       // LED output pin
int rainValue;

int rainThreshold = 500;  // Below this = rain detected

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  rainValue = analogRead(rainPin);

  Serial.print("Rain Sensor Value: ");
  Serial.println(rainValue);

  if (rainValue < rainThreshold) {
    Serial.println("Status: RAIN DETECTED");
    digitalWrite(ledPin, HIGH);
  } else {
    Serial.println("Status: NO RAIN");
    digitalWrite(ledPin, LOW);
  }

  Serial.println("---------------------");
  delay(500);
}