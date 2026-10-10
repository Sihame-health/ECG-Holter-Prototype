/*
 * ECG Holter Prototype
 * Academic project - 2021/2022
 *
 * Reconstructed source code for the archived prototype.
 *
 * Main functions:
 * - Analog ECG signal acquisition
 * - Serial monitoring
 * - Bluetooth transmission
 *
 * The prototype was tested using controlled electrical signals
 * rather than human ECG electrodes.
 */

const int ECG_INPUT = A0;

// Bluetooth serial pins
// Change these pins according to the Bluetooth module wiring.
const int BT_RX = 10;
const int BT_TX = 11;

#include <SoftwareSerial.h>

SoftwareSerial bluetooth(BT_RX, BT_TX);

const unsigned long BAUD_RATE = 9600;

void setup() {
  Serial.begin(BAUD_RATE);
  bluetooth.begin(BAUD_RATE);

  pinMode(ECG_INPUT, INPUT);

  Serial.println("ECG Holter Prototype");
  Serial.println("Acquisition started...");
}

void loop() {

  // Read the conditioned analog signal
  int ecgValue = analogRead(ECG_INPUT);

  // Send the acquired value to the computer
  Serial.println(ecgValue);

  // Send the same value through Bluetooth
  bluetooth.println(ecgValue);

  // Small delay to control the acquisition rate
  delay(5);
}