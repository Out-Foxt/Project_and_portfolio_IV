//Project and portfolio IV
//Nov_2021
//Created by Tyler Fox
//Social Distancing alarm
//Version 1.0 

//variables 
int tPin = 2;
int ePin = 3;
float distance;
int duration;

void setup() {
pinMode(ePin, INPUT); 
pinMode(tPin, OUTPUT); 
Serial.begin(9600);

}//end setup


void loop() {
  
//clears the tPin
digitalWrite(tPin, LOW);
delayMicroseconds(3);

//Set tPin to hight for 10ms
digitalWrite(tPin, HIGH);
delayMicroseconds(10);
digitalWrite(tPin, LOW);

//reads ePin and returns distance traveled in ms
duration = pulseIn(ePin, HIGH);

//distance calculation 
distance = duration*0.034/2;

//prints distance for testing purposes 
//(DONT LEAVE IN FINAL BUILD)
Serial.println(distance);


//TODOs: 

//add functionality for user to set diferent distance and not have it hard coded

//add in alarm here 


}//end main loop 
