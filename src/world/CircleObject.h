/*
 * This is the class of objects that exists in the world
 * This is an abstract class
 */
#ifndef TWO_WORLD_CIRCLEOBJECT_H_
#define TWO_WORLD_CIRCLEOBJECT_H_

#include "Point.h"

class CircleObject {
  Point center() const { return center_; };
  double radius() const { return radius_; };

 protected:
  CircleObject(double x, double y, double radius) :
    center_(x, y), radius_(radius) {}

  Point center_;
  double radius_;
};
#endif
