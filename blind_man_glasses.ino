const int trigPin = 9;
const int echoPin = 10;
const int buzzerPin = 7;
const int vibMotorPin = 6;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(vibMotorPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 0 && distance <= 100) {
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(vibMotorPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(vibMotorPin, LOW);
  }

  delay(200);
}
