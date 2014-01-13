#pragma once

#ifndef TWO_SCREEN_INITSCREEN_H_
#define TWO_SCREEN_INITSCREEN_H_

#include <stdint.h>
#include <SFML/System.hpp>
#include "screen.h"

class InitScreen : public Screen {
 public:
  InitScreen(Game *game);
  ~InitScreen();
  void update(int32_t time);
  void paint();
 private:
  int32_t elapsedTime;
};
#endif //TWO_SCREEN_INITSCREEN_H_