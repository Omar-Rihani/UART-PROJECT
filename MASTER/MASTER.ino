int buttonPin = 8;        
int buttonState;          // Holds the state of the button (HIGH or LOW)

void setup() {
  Serial.begin(9600);     // Initialize serial communication
  pinMode(buttonPin, INPUT); // Set the button pin as input
}

void loop() {
  buttonState = digitalRead(buttonPin);  // Read the button state
  Serial.println(buttonState);           // Print the button state to the serial monitor
}
