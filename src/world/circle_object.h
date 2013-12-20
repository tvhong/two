/*
 *
 *
 */
#ifndef TWO_WORLD_CIRCLEOBJECT_H_
#define TWO_WORLD_CIRCLEOBJECT_H_

#include "Point.h"

class CircleObject {
 public:
  virtual Point& center() = 0;
  virtual double radius() = 0;
};
#endif