const int SW = 2;
const int X = 0;
const int Y = 1;
const int ledPin = 3;

void setup() {
  pinMode(SW, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int xVal = analogRead(X);
  int brightness = map(xVal, 0, 1023, 0, 255);
  analogWrite(ledPin, brightness);

  Serial.print("Switch: ");
  Serial.print(digitalRead(SW));
  Serial.print("\t\t");
  Serial.print("VRx: ");
  Serial.print(xVal);
  Serial.print("\t\t");
  Serial.print("VRy: ");
  Serial.println(analogRead(Y));
  Serial.println("_____");
  delay(10);
}
