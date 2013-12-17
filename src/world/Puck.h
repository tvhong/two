/*
 *
 */
#ifndef TWO_WORLD_PUCK_H_
#define TWO_WORLD_PUCK_H_

#include "Point.h"
#include "Vector.h"
#include "CircleObject.h"

class Puck : public CircleObject {
 public:
  // TODO: update MAX_SPEED & MIN_SPEED with more reasonable values
  // when we get the game running
  static const double MAX_SPEED;
  static const double MIN_SPEED;

  Puck(Point center, double radius);

  Point* center() { return center_; }
  double radius() { return radius_; }
  double weight() { return weight_; }
  Vector* speed() { return speed_; }

 private:
  Point* center_;
  double radius_;
  double weight_;
  Vector* speed_;
}; // Puck
#endif // TWO_WORLD_PUCK_H_
