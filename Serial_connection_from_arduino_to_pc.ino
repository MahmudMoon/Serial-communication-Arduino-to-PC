int potentiometerPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(potentiometerPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int res = analogRead(potentiometerPin);
  Serial.println(res);
  delay(1000);
}