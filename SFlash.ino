#include "classes.ino"


void setup() {

  int i;

  Seq simon(DEFAULT_LEVELS);
  
  //Generates the color sequence
  for (i = 0; i < DEFAULT_LEVELS; i++){
    Color c;
    simon.addColor(c);
  }

  pinMode(GreenLed, OUTPUT);
  pinMode(YellowLed, OUTPUT);
  pinMode(BlueLed, OUTPUT);
  pinMode(RedLed, OUTPUT);

  pinMode(GreenB, INPUT);
  pinMode(YellowB, INPUT);
  pinMode(BlueB, INPUT);
  pinMode(RedB, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

}
