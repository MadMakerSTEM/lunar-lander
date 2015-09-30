#include <Esplora.h>


void setup()
{
  Serial.begin(9600);       // initialize serial communication with your computer
  Keyboard.begin();
}

void loop()
{
  int xValue = Esplora.readJoystickX();        // read the joystick's X position
  int slider = Esplora.readSlider();
  if (xValue < -50) {
    Keyboard.press(KEY_RIGHT_ARROW);
  }
  else if (xValue > 50) {
    Keyboard.press(KEY_LEFT_ARROW);
  }
  else {
    Keyboard.release(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_LEFT_ARROW);
  }
  if(Esplora.readButton(1) == LOW) {
    Keyboard.press(KEY_UP_ARROW);
    Esplora.writeRed(150);
  }
  else {
    Keyboard.release(KEY_UP_ARROW);
    Esplora.writeRed(0);
  }
  Serial.print(slider);
  Serial.println();
  delay(15);
}

