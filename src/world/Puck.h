/*
 * Class that represents a Puck
 */

#ifndef TWO_WORLD_PUCK_H_
#define TWO_WORLD_PUCK_H_

#include "CircleObject.h"
#include "Point.h"
#include "VectorMD.h"

class Puck : public CircleObject {
 public:
  static const double MAX_SPEED = 7.0;
  static const double MIN_SPEED = 1.0;

  Puck(Point& center, double radius, double weight) :
    CircleObject(center.x(), center.y(), radius),
    velocity_(), weight_(weight) {}

  double weight() const { return weight_; }
  VectorMD velocity() const { return velocity_; }

 private:
  double weight_;
  VectorMD velocity_;
}; // Puck

#endif // TWO_WORLD_PUCK_H_
