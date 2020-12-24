#include <Arduino.h>

#define RED 3
#define GREEN 4
#define BLUE 2

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  digitalWrite(RED, HIGH);
  delay(500);
  digitalWrite(RED, LOW);

  digitalWrite(GREEN, HIGH);
  delay(500);
  digitalWrite(GREEN, LOW);

  digitalWrite(BLUE, HIGH);
  delay(500);
  digitalWrite(BLUE, LOW);

  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  delay(500);
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);

  digitalWrite(RED, HIGH);
  digitalWrite(BLUE, HIGH);
  delay(500);
  digitalWrite(RED, LOW);
  digitalWrite(BLUE, LOW);

  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  delay(500);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);

  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  delay(500);
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}
