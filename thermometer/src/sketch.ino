#include <Adafruit_LEDBackpack.h>
#include <Adafruit_GFX.h>
#include <Wire.h>
#include <OneWire.h>
#include <DallasTemperature.h>

Adafruit_7segment matrix = Adafruit_7segment();

/*-----( Declare Constants )-----*/
#define ONE_WIRE_BUS A3 /*-(Connect to Pin 2 )-*/

/*-----( Declare objects )-----*/
/* Set up a oneWire instance to communicate with any OneWire device*/
OneWire ourWire(ONE_WIRE_BUS);

/* Tell Dallas Temperature Library to use oneWire Library */
DallasTemperature sensors(&ourWire);

void setup() {

  Serial.begin(9600);      // open the serial port at 9600 bps:
  Serial.print("Hello\n");
  sensors.begin();
  pinMode(A5, OUTPUT);
  pinMode(A4, OUTPUT);
  matrix.begin(0x70);

}



void loop() {

  sensors.requestTemperatures();
  float TEMP = sensors.getTempFByIndex(0);
  Serial.print(TEMP);
  Serial.print("\n");
  matrix.print((float)TEMP);
  matrix.writeDisplay();
  delay(500);
}


