char string[] = "SANJIV";

void dot() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for 1 second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
}
void dash() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                       // wait for 2 second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
}

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
      for(int i = 0; i < sizeof(string); i++){
         if(string[i] == 'A'){
            dot();
            dash();
         }
         else if(string[i] == 'B'){
            dash();
            dot();
            dot();
            dot();
         }
         else if(string[i] == 'C'){
            dash();
            dot();
            dash();
            dot();
         }
         else if(string[i] == 'D'){
            dash();
            dot();
            dot();
         }
         else if(string[i] == 'E'){
            dot();
         }
         else if(string[i] == 'F'){
            dot();
            dot();
            dash();
            dot();
         }
         else if(string[i] == 'G'){
            dash();
            dash();
            dot();
         }
         else if(string[i] == 'H'){
            dot();
            dot();
            dot();
            dot();
         }
         else if(string[i] == 'I'){
            dot();
            dot();
         }
         else if(string[i] == 'J'){
            dot();
            dash();
            dash();
            dash();
         }
         else if(string[i] == 'K'){
            dash();
            dot();
            dash();
         }
         else if(string[i] == 'L'){
            dot();
            dash();
            dot();
            dot();
         }
         else if(string[i] == 'M'){
            dash();
            dash();
         }
         else if(string[i] == 'N'){
            dash();
            dot();
         }
         else if(string[i] == 'O'){
            dash();
            dash();
            dash();
         }
         else if(string[i] == 'P'){
            dot();
            dash();
            dash();
            dot();
         }
         else if(string[i] == 'Q'){
            dash();
            dash();
            dot();
            dash();
         }
         else if(string[i] == 'R'){
            dot();
            dash();
            dot();
         }
         else if(string[i] == 'S'){
            dot();
            dot();
            dot();
         }
         else if(string[i] == 'T'){
            dash();
         }
         else if(string[i] == 'U'){
            dot();
            dot();
            dash();
         }
         else if(string[i] == 'V'){
            dot();
            dot();
            dot();
            dash();
         }
         else if(string[i] == 'W'){
            dot();
            dash();
            dash();
         }
         else if(string[i] == 'X'){
            dash();
            dot();
            dot();
            dash();
         }
         else if(string[i] == 'Y'){
            dash();
            dot();
            dash();
            dash();
         }
         else if(string[i] == 'Z'){
          dash();
          dash();
          dot();
          dot();
         }
      }
}
