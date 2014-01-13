#pragma once
#ifndef TWO_SCREEN_SCREEN_H_
#define TWO_SCREEN_SCREEN_H_

#include <stdint.h>
#include <SFML/Graphics.hpp>

class Game;
class Screen {
 public:
  Screen(Game *game) {game_=game;}

  virtual void update(int32_t time) = 0;
  virtual void paint() = 0;
 
 protected:
  Game* game() {return game_;}
 
 private:
  Game* game_;
};
#endif
