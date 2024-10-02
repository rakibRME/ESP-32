#include "BluetoothSerial.h"

BluetoothSerial serialBT;
char cmd; // Changed from char array to String for easy handling

void setup() {
  serialBT.begin("Esp32-BT");
  pinMode(2, OUTPUT);
}

void loop() {
  if (serialBT.available()) {
    cmd = serialBT.read(); // Read the incoming string
  }
  if (cmd == '1') {
    digitalWrite(2, HIGH);
  } else if (cmd == '0') {
    digitalWrite(2, LOW);
  }
  delay(500);
}
