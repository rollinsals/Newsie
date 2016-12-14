//Rollin Sals.
//Whatever

#include <Arduboy.h>
Arduboy2 arduboy;

void setup() {
  arduboy.begin();
  arduboy.setFrameRate(60);
  arduboy.clear();
}

void loop() {
  if(!(arduboy.nextFrame())) {
    return;
  }

  switch(gamestate) {
    case 0:

      break;
    case 1:

      break;
    case 2:

      break;
  }
}
