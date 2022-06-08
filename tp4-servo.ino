/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int pw_ldr = A0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  Serial.begin (9600);
}
  
void loop() {
  int valor = analogRead (pw_ldr);
  Serial.println (valor);
  int angulo = map (valor,570, 875, 0, 180);
  myservo.write (angulo);
  delay (90);
   //for (int i=0; i <= 180; i++){
  //myservo.write(i);                  // sets the servo position according to the scaled value
  //delay(20);
   }
  //for (int i=180; i >= 0; i--){ 
  //myservo.write(i);
  //delay(20); 
  
