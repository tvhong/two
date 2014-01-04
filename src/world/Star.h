/*
 *
 */
#ifndef TWO_WORLD_STAR_H_
#define TWO_WORLD_STAR_H_

#include "Point.h"
#include "CircleObject.h"

class Star : public CircleObject {
 public:
  Star(Point& center, double radius, bool state) :
    CircleObject(center.x(), center.y(), radius), state_(state){}

  bool isOn() const { return state_; }
  void turnOff() { state_=false; }
  void turnOn() { state_=true; }

 private:
  bool state_;
}; // Star
#endif // TWO_WORLD_STAR_H_
