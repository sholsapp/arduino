#include <Time.h>

#include <Adafruit_LEDBackpack.h>
#include <Adafruit_GFX.h>


Adafruit_7segment matrix = Adafruit_7segment();


void setup() {
  Serial.begin(9600);
  pinMode(A5, OUTPUT);
  pinMode(A4, OUTPUT);
  matrix.begin(0x70);
}

void loop() {
  Serial.print(count);
  matrix.writeDigit(0, hour());
  matrix.writeDigit(2, minute());
  matrix.drawColon(true);
  matrix.writeDisplay();
  delay(100);
}

