///////////////////////////////////////////////////////////////////////////////
//
//    To do: void finish(), void checkCorrect(),  complete class Seq, 
//
//
//
//
///////////////////////////////////////////////////////////////////////////////

// green -> 0
// yellow -> 1
// Blue -> 2
// Red -> 3

#define GREEN 0
#define YELLOW 1
#define BLUE 2
#define RED 3

// Leds (OUTPUTS)
int GreenLed = 3;
int YellowLed = 4;
int BlueLed = 5;
int RedLed = 6;

// Buttons (INPUTS)
int GreenB = 7;
int YellowB = 8;
int BlueB = 9;
int RedB = 10;


// Object Color
class Color{
private:
  int value = -1;

public:

  Color(void){
    value = random(0,4);
  }
  Color(int val){
    value = val;
  }

  int getValue(void){
    return value;
  }


};


// Object sequence

class Seq{
private:
  Color * sequence;
  Color * userInput;
  int sizee;
  int utils;
  bool correct = true;
public:
  Seq(void){
    sequence = new Color[0];
    sizee = 0;
    utils = -1;
  }
  Seq(int elements){
    sequence = new Color[elements];
    sizee = elements;
    utils = 0;
  }
  bool addColor(Color color){
    bool result = false;
    
    if (utils+1 < sizee){
      sequence[utils] = color;
      
      result = true;
    }
    return result;
  }


  
};





void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
