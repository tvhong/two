#include "SFML/Graphics.hpp"
#include "init_screen.h"
#include "../game.h"
const int FLASHTIME = 10000;

sf::Text* text;

InitScreen::InitScreen(Game *game):Screen(game) {
  elapsedTime=0;
  sf::Font font;
  if (!font.loadFromFile("../fonts/comic.ttf"))
    exit(-1);
  text = new sf::Text("Hello SFML", font, 50);
}

InitScreen::~InitScreen() {}

void InitScreen::update(int32_t time) {
  elapsedTime += time;
  if (elapsedTime>=FLASHTIME)
    game()->setScreen(NULL);
}

void InitScreen::paint() {
  game()->window()->clear();
  game()->window()->draw(*text);
  game()->window()->display();
}
