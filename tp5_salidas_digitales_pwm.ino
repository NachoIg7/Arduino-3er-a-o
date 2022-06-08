int SensorPin = A4;
void setup() {
Serial.begin(9600);
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int humedad = analogRead(SensorPin);
   Serial.println(humedad);

   int valorh = map (humedad,400, 1023, 0, 255);
   analogWrite(11,valorh);
   delay (500);
   


/*
analogWrite(11,0);
delay (1500);

analogWrite(11,50);
delay (1500);

analogWrite(11,100);
delay (1500);

analogWrite(11,150);
delay (1500);

analogWrite(11,200);
delay (1500);

analogWrite(11,250);
delay (1500);
*/
}
