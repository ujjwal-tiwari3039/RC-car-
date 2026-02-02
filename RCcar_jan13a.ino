char data; // Variable to store received data

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud rate

  // Set motor control pins as output
  pinMode(7, OUTPUT); //in4
  pinMode(6, OUTPUT); //in3
  pinMode(5, OUTPUT);//in2
  pinMode(3, OUTPUT); //in1

}

void loop() {
  if (Serial.available() > 0) {
    data = Serial.read(); // Read received data

    // Control motor movement based on received data
    switch (data) {
      case 'F': // Move Forward
        digitalWrite(3, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        break;
      case 'B': // Move Backward
        digitalWrite(3, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        break;
      case 'L': // Turn Left
        digitalWrite(7, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(3, LOW);
        digitalWrite(5, HIGH);
        break;
      case 'R': // Turn Right
        digitalWrite(7, LOW);
        digitalWrite(6, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(3, HIGH);
        break;
      case 'S': // Stop
        digitalWrite(7, LOW);
        digitalWrite(6, LOW);
        digitalWrite(5, LOW);
        digitalWrite(3, LOW);
        break;
    }
  }
}