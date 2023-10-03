int ledPin = 4;  // Pin for the LED on the Arduino
int ledState = LOW;  // Initial state of the LED

// Function executed only once at the beginning of the program
void setup() {
  pinMode(ledPin, OUTPUT); // Pin 13 where the LED is located is configured as an output
  Serial.begin(9600);  // Initialize serial communication at the same baud rate as in MATLAB
}

// Repeatedly executes the main program
void loop() {
  if (Serial.available() > 0) { // Check if there is data available on the serial port for reading
    char command = Serial.read(); // Read the serial port
    
    if (command == '1') {
      ledState = HIGH;  // Turn on the LED
    } else if (command == '0') {
      ledState = LOW;   // Turn off the LED
    } else if (command == '2'){
      ledState = LOW;
      Serial.end();
    }
    
    digitalWrite(ledPin, ledState);  // Update the state of the LED
  }
}

