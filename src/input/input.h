/**
  * \brief types of input events / what actions the players can do
  * \ingroup input
  */
#ifndef HEADER_INPUT_HPP
#define HEADER_INPUT_HPP

enum PlayerAction
{
  PA_MOVE_LEFT
  PA_MOVE_RIGHT
  PA_MOVE_TOP
  PA_MOVE_BOTTOM
  PA_DASH

  PA_ABILITY1
  PA_ABILITY2
  PA_ABILITY3


  PA_MENU_UP,
  PA_MENU_DOWN,
  PA_MENU_SELECT,
  PA_MENU_CANCEL,

  PA_ESCAPE
};
#endif