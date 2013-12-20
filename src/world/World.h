/*
 *
 */
#ifndef TWO_WORLD_WORLD_H_
#define TWO_WORLD_WORLD_H_

#include <stdint.h>
#include <utility>

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

  // personally dislike using pair
  // any alternative?
  std::pair<int,int> numOfStars();

  void processInput(PlayerAction pa);

  Puck puck();
  Mallet mallet1();
  Mallet mallet2();
  // TODO Star list
  Terrain terrain();
};
#endif // TWO_WORLD_WORLD_H_