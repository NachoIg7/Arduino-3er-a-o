#define trigPin  12
#define echoPin  10
#define ledentrada 4
long duration, cm, inches;
 
void setup() {
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(ledentrada, OUTPUT);
  Serial.begin(9600);

}
 
void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  duration = pulseIn(echoPin, HIGH);
 
  // Calculating the distance
  cm= duration*0.034/2;
  Serial.print("Distance: ");
  Serial.print(cm);
  Serial.println(" cm");

  if ( cm > 0 and cm < 20){
    digitalWrite(ledentrada, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);                       // wait for a second
  
    digitalWrite(ledentrada, LOW);    // turn the LED off by making the voltage LOW
    delay(500);
  }

   if ( cm > 20 and cm < 40){
    digitalWrite(ledentrada, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
  
    digitalWrite(ledentrada, LOW);    // turn the LED off by making the voltage LOW
    delay(100);
  }
  delay(250);
}
