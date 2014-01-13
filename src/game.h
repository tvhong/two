#pragma once

#ifndef TWO_GAME_H_
#define TWO_GAME_H_
#include <SFML/Graphics.hpp>

class Screen;
class Game {
 public:
   Game();
  ~Game();
  Screen* getCurrentScreen();
  void setScreen(Screen * screen);
  sf::RenderWindow* window();
};
#endif // TWO_GAME_H_
