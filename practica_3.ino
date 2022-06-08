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

#define ledr 4 //pin positivo,,,, usamos define porque usa menos memoria que la constante
#define ledg 5
#define ledb 7

String valores = "rgbplyw";


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledr, OUTPUT);
  Serial.begin(9600);

  pinMode(ledg, OUTPUT);
  

  pinMode(ledb, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  color ('r');
  delay (500);
  color ('g');
  delay (500);
  color ('b');
  delay (500);
  color ('p');
  delay (500);
  color ('l');
  delay (500);
  color ('y');
  delay (500);
  color ('w');
  delay (500);
  color ('n');
  delay (2000);
  color (valores [random(0,6)]);
  delay (2000);
}

void color(char letra){

    switch (letra){
     case 'r': {
      digitalWrite(ledr,HIGH);
      digitalWrite(ledg,LOW);
      digitalWrite(ledb,LOW);
break;                    }
     case 'g':{                
      digitalWrite(ledr,LOW);
      digitalWrite(ledg,HIGH);
      digitalWrite(ledb,LOW);
break;      
                  }
                  
          case 'b':{
      digitalWrite(ledr,LOW);
      digitalWrite(ledg,LOW);
      digitalWrite(ledb,HIGH);
break;                   }
        
          case 'p':{
      digitalWrite(ledr,HIGH);
      digitalWrite(ledg,LOW);
      digitalWrite(ledb,HIGH);
break;                   }
    
          case 'l':{
      digitalWrite(ledr,LOW);
      digitalWrite(ledg,HIGH);
      digitalWrite(ledb,HIGH);
break;                   }
        
          case 'y':{
      digitalWrite(ledr,HIGH);
      digitalWrite(ledg,HIGH);
      digitalWrite(ledb,LOW);
break;                   }
      
          case 'w':{
      digitalWrite(ledr,HIGH);
      digitalWrite(ledg,HIGH);
      digitalWrite(ledb,HIGH);
break;                   }
    
          case 'n':{
      digitalWrite(ledr,LOW);
      digitalWrite(ledg,LOW);
      digitalWrite(ledb,LOW);
break;                   }          
}
}
