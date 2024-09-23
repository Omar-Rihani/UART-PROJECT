int ledPin = 8;        // Renamed variable for better clarity
char receivedData;     // Renamed to indicate it's data being received

void setup() {
  Serial.begin(9600);  // Initialize serial communication
  pinMode(ledPin, OUTPUT); // Set LED pin as output
}

void loop() {
  // Check if data is available on the serial port
  if (Serial.available()) {
    receivedData = Serial.read();  // Read the received data
    Serial.write(receivedData);    // Send the received data back (echo)

    // Control the LED based on received data
    if (receivedData == '1') {
      digitalWrite(ledPin, LOW);   // Turn ON the LED (active LOW)
    } else if (receivedData == '0') {
      digitalWrite(ledPin, HIGH);  // Turn OFF the LED
    }
  }
}
