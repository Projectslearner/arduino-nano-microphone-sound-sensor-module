/*
    Project name : Microphone sound sensor module
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-microphone-sound-sensor-module
*/

const int soundSensorPin = A0; // Analog pin connected to the sound sensor module

void setup() {
  pinMode(soundSensorPin, INPUT); // Set sound sensor pin as input
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int sensorValue = analogRead(soundSensorPin); // Read sensor value
  
  // Print sensor value to Serial Monitor
  Serial.print("Sound Sensor Value: ");
  Serial.println(sensorValue);
  
  // If sensor value is above a threshold, turn on LED
  if (sensorValue > 500) 
  {
\    Serial.println("Sound Detected!");
  } 
  
  delay(100); // Delay for stability
}
