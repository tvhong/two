/*
 *
 */
#ifndef TWO_WORLD_MALLET_H_
#define TWO_WORLD_MALLET_H_

#include "Point.h"
#include "Vector.h"

class Mallet : public CircleObject {
 public:
  static const double DASH_SPEED;
  static const double BASE_SPEED;

  Mallet(Point center, double radius);

  Point& center() const { return &center_;}
  double radius() const { return radius_; }
  double weight() const { return weight_; }
  Vector& speed() const { return &speed_; }
  double energy() const { return ep_; }
  double baseSpeed() const { return base_speed_; }
  void decEnergy(double dep) { ep_-=dep; }
  void incEnergy(double dep) { ep_+=dep; }
  // Possible Abilities
  void setRadius(double radius) { radius_=radius; }
  void setWeight(double weight) { weight_=weight; }
  void setBaseSpeed(double baseSpeed) { baseSpeed_=baseSpeed; }

 private:
  Point  center_;
  double radius_;
  double weight_;
  double base_speed_;
  Vector speed_;
  double ep_;
};
#endif // TWO_WORLD_MALLET_H_
