/*
 *
 */
#ifndef TWO_WORLD_WORLD_H_
#define TWO_WORLD_WORLD_H_

#include <stdint.h>
//#include <utility>

#include "input/input.h"

class World {
 public:
  enum Terrain {
    SAND
  };
  enum WallSide {
    TOP, BOTTOM, LEFT, RIGHT
  };

  void update(int64_t time);

  // Get the number of stars left of player 1 and player 2
  int stars_p1();
  int stars_p2();

  void processInput(PlayerAction pa);

  Puck puck();
  Mallet mallet1();
  Mallet mallet2();
  // TODO Star list
  Terrain terrain();
};
#endif // TWO_WORLD_WORLD_H_
