int pushButton = 2; // Pin for the push button
// The setup routine runs once when you press reset:
void setup() {
  // Initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
  // Make the pushbutton's pin an input:
  pinMode(pushButton, INPUT); // No internal pull-up
  
  // Set output pins
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}
// The loop routine runs over and over again forever:
void loop() {
  // Read the input pin:
  int buttonState = digitalRead(pushButton);
  
  // Turn on the LEDs based on the button state
  if (buttonState == HIGH) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }
  
  // Print out the state of the button:
  Serial.print("buttonState = ");
  Serial.println(buttonState);
  
  delay(1);  // Delay in between reads for stability
}