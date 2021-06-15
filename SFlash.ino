#include "classes.h"

Seq simon(DEFAULT_LEVELS);
  

void setup() {

  pinMode(GreenLed, OUTPUT);
  pinMode(YellowLed, OUTPUT);
  pinMode(BlueLed, OUTPUT);
  pinMode(RedLed, OUTPUT);

  pinMode(GreenB, INPUT);
  pinMode(YellowB, INPUT);
  pinMode(BlueB, INPUT);
  pinMode(RedB, INPUT);

  //Generates the color sequence
  /*for (int i = 0; i < DEFAULT_LEVELS; i++){
    Color c;
    simon.addColor(c);
  }*/

}


void loop() {

  //simon.randomize();
  
  for (int i = 0; i < DEFAULT_LEVELS; i++){
    simon.displaySeq(i);
    //simon.readInput(i);
    delay(1000);
  }

  delay(10000);

}
