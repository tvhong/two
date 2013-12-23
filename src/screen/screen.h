#ifndef TWO_SCREEN_SCREEN_H_
#define TWO_SCREEN_SCREEN_H_

#include <stdint.h>
#include "game.h"

class Screen {
 public:
  Screen(Game game) {game_=game;init()}
  virtual void update(int64_h) = 0;
  virtual void paint() = 0;
 
 protected:
  Game game() {return game_;}
 
 private:
  Game game_;
  virtual void init() = 0;
}
#endif // TWO_SCREEN_SCREEN_H_