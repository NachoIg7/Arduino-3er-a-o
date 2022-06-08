/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

#define led1 7  //pin positivo,,,, usamos define porque usa menos memoria que la constante
#define led2 2
#define led3 4


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
  Serial.begin(9600);

  pinMode(led2, OUTPUT);
  Serial.begin(9600);

  pinMode(led3, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  Serial.println("encendido");
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  Serial.println("apagado");
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
  
  Serial.println("encendido");
  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  Serial.println("apagado");
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
    
  Serial.println("encendido");
  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  Serial.println("apagado");
  digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
  delay(50);  
  
  // wait for a second
}
