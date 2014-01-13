#include "SFML/System.hpp"
#include "SFML/Graphics.hpp"
#include "screen/init_screen.h"
#include "game.h"

const int FPS = 60;
Screen* screen_;
sf::RenderWindow* window_;

Game::Game() {
  sf::RenderWindow w(sf::VideoMode(800, 600), "Two");
  window_ = &w;
  window_->setFramerateLimit(FPS);
  screen_ = new InitScreen (this);
  while (window_->isOpen()) {
    screen_->update(1000/FPS);
    screen_->paint();
  }
}

Screen* Game::getCurrentScreen() {
  return screen_;
}

void Game::setScreen(Screen * screen) {
  delete screen;
  screen = screen_;
}

sf::RenderWindow* Game::window() {
  return window_;
}
