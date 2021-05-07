
// green -> 0
// yellow -> 1
// Blue -> 2
// Red -> 3


#define GREEN 0
#define YELLOW 1
#define BLUE 2
#define RED 3
#define DEFAULT_LEVELS 15


// Leds (OUTPUTS)
const int GreenLed = 3;
const int YellowLed = 4;
const int BlueLed = 5;
const int RedLed = 6;

// Buttons (INPUTS)
const int GreenB = 7;
const int YellowB = 8;
const int BlueB = 9;
const int RedB = 10;


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
  int utilsSeq;
  int utilsUser;
  bool correct = true;

public:
  Seq(void){
    sequence = new Color[0];
    sizee = 0;
    utilsSeq = -1;
    utilsUser = -1;
  }

  Seq(int elements){
    sequence = new Color[elements];
    sizee = elements;
    utilsSeq = 0;
    utilsUser = 0;
  }

  bool addColor(Color color){
    bool result = false;
    
    if (utilsSeq+1 < sizee){
      sequence[utilsSeq] = color;
      utilsSeq++;
      
      result = true;
    }

    return result;
  }

  bool addUserInput(Color color){
    bool result = false;

    if (utilsUser+1 < sizee){
      userInput[utilsUser] = color;
      utilsUser++;

      result = true;
    }

    return result;
  }

  Color getSeqColor(int i){
    return sequence[i];
  }

  void randomize(){
    int tam = 0;
    int cValue;
    
    while (tam < sizee){
      cValue = random(0,4);
      Color c(cValue);

      addColor(c);
      
      tam++;
    }
  }

  void displaySeq(int l){
    int i, j;
    int colorLed;
    Color c;

    for (i = 0; i < l; i++){
        c = getSeqColor(i);

        if (c.getValue() == GREEN){
          colorLed = GreenLed;
        }
        else if (c.getValue() == YELLOW){
          colorLed = YellowLed;
        }
        else if (c.getValue() == BLUE){
          colorLed = BlueLed;
        }
        else{
          colorLed = RedLed;
        }

        digitalWrite(colorLed, HIGH);
        delay(500);
        digitalWrite(colorLed, LOW);
        delay(500);
      
    }
  }