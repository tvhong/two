/*
 *
 */
#ifndef TWO_WORLD_WORLD_H_
#define TWO_WORLD_WORLD_H_

#include <stdint.h>
#include <vector>
#include "Mallet.h"
#include "Puck.h"
#include "Star.h"
#include "input/input.h"


class World {
 public:
  World(Terrain terrain);

  Puck puck() const { return puck_; }
  Mallet mallet_p1() const { return mallet_p1_; }
  Mallet mallet_p2() const { return mallet_p2_; }
  int nstars_p1() const { return stars_p1_.size(); }
  int nstars_p2() const { return stars_p2_.size(); }
  Terrain terrain() const { return terrain_; }

  void update(int64_t time);
  void processInput(PlayerAction pa);

 private:
  Puck puck_;
  Mallet mallet_p1_;
  Mallet mallet_p2_;
  std::vector<Star> stars_p1_;
  std::vector<Star> stars_p2_;
  Terrain terrain_;
};
#endif // TWO_WORLD_WORLD_H_
