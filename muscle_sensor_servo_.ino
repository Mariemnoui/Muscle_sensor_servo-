#include <Servo.h> 

const int x = 200 ; //This is the reference value and it
//will depend on your setup. You have to find it out 
//yourself by looking at the serial monitor and finding
//a value between the maximum and minimum value.

//Naming the servos
Servo servo;


void setup() 
{ 
//Starting the serial monitor
Serial.begin(9600); 

//Configuring servo pins
servo.attach(2); // pinky

} 


void loop() 
{ 
//Printing the EMG data
Serial.println(analogRead(5)); 

//If the EMG data is greater than x the hand closes
  if(analogRead(5) > x) {
    servo.write(160);
    
  }

//If the EMG data is lower than x the hand opens
  else if (analogRead(5) < x) {
    servo.write(34);
    
  }

//A delay to slow down the process
  delay(100);
} 

