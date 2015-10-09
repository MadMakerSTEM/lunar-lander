#include <Esplora.h>
 
void setup()
{
  Serial.begin(9600);       // initialize serial communication with your computer
  Keyboard.begin();
}
 
void loop()
{
  // read the joystick
  if (/* SOME CONDITION */) {
    // PRESS A KEY TO TURN ONE WAY
  }
  else if (/* SOME OTHER CONDITION */) {
    // PRESS A DIFFERENT KEY TO TURN THE OTHER WAY
  }
  else {
    //Keyboard.release(FIRST_KEY);
    //Keyboard.release(SECOND_KEY);
  }
  if(/* ANOTHER CONDITION */) {
    // PRESS THE THRUSTER KEY
  }
  else {
    // RELEASE THE THRUSTER KEY
  }
  delay(15);

}
