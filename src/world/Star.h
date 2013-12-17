/*
 *
 */
#ifndef TWO_WORLD_STAR_H_
#define TWO_WORLD_STAR_H_

#include "Point.h"
#include "CircleObject.h"

class Star : public CircleObject {
 public:
  Star(Point center, double radius);
  Point* center() { return center_; }
  double radius() { return radius_; }

  bool isOn()    { return state; }
  bool turnOff() { state=false; }
  bool turnOn()  { state=true; }

 private:
  Point* center_;
  double radius_;
  bool state;
}; // Star
#endif // TWO_WORLD_STAR_H_
