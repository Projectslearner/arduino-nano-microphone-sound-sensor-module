/*
    Project name : Microphone sound sensor module
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-microphone-sound-sensor-module
*/

const int soundSensorPin = A0; // Analog pin connected to the sound sensor module
const int ledPin = 13; // LED pin

void setup() {
  pinMode(soundSensorPin, INPUT); // Set sound sensor pin as input
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int sensorValue = analogRead(soundSensorPin); // Read sensor value
  
  // Print sensor value to Serial Monitor
  Serial.print("Sound Sensor Value: ");
  Serial.println(sensorValue);
  
  // If sensor value is above a threshold, turn on LED
  if (sensorValue > 500) {
    digitalWrite(ledPin, HIGH); // Turn on LED
    Serial.println("Sound Detected!");
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED
  }
  
  delay(100); // Delay for stability
}
