const int RELAY_PIN = 12;  
int datafromUser=0;// the Arduino pin, which connects to the IN pin of relay

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 3 as an output.
 

   Serial.begin(9600);
     pinMode(RELAY_PIN, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
   // uhlock the door

  if(Serial.available() > 0)
  {
    datafromUser=Serial.read();
   Serial.write(datafromUser);

  if(datafromUser == '1')
  {
    digitalWrite(RELAY_PIN, LOW);
 
  }
  else if(datafromUser == '0')
  {
    digitalWrite( RELAY_PIN , HIGH );
    // lock the 
  }
  }
}
