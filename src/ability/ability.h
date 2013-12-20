#ifndef TWO_ABILITY_ABILITY_H_
#define TWO_ABILITY_ABILITY_H_

#include <stdint.h>
#include "world/world.h"
#include "world/mallet.h"
#include "world/puck.h"
#include "world/star.h"

class Ability {
 public:
  virtual void onActivation(Mallet m, World w) = 0;
  virtual void onTimeOut(Mallet m, World w) = 0;

  // MvP = the collision of your Mallet and the Puck
  virtual void  preColMvP(Mallet m, Puck p, World w) {}
  virtual bool skipColMvP() { return false; }
  virtual void postColMvP(Mallet m, Puck p, World w) {}

  // ONLY IF there's an ability charge in P  
  // PvM = the collision of the Puck and the opponent's Mallet
  virtual void preColPvM (Puck p, Mallet m, World w) {}

  // ONLY IF there's an ability charge in P
  // PvW = the collision of the Puck and the wall
  virtual void  preColPvW(Puck p, WallSide ws, World w) {}
  virtual bool skipColPvW() { return false; }
  virtual void postColPvW(Puck p, WallSide ws, World w) {}

  // ONLY IF there's an ability charge in P
  // PvS = the collision of the Puck and the Star
  virtual void  preColPvS(Puch p, Star s, World w) {}
  virtual void postColPvS(Puch p, Star s, World w) {}

  virtual double ep_cost() = 0;
  virtual int64_t cooldown() = 0;
}