/*
 *
 */
#ifndef TWO_WORLD_MALLET_H_
#define TWO_WORLD_MALLET_H_

#include "CircleObject.h"
#include "Point.h"
#include "VectorMD.h"

class Mallet : public CircleObject {
 public:
  Mallet(Point& center, double radius, double weight,
         double base_speed, double dash_speed, double max_ep) :
      CircleObject(center.x(), center.y(), radius), weight_(weight),
      base_speed_(base_speed), dash_speed_(dash_speed),
      velocity_(), max_ep_(max_ep), ep_(max_ep) {}

  double weight() const { return weight_; }
  VectorMD velocity() const { return velocity_; }

  double energy() const { return ep_; }
  double base_speed() const { return base_speed_; }
  void dec_energy(double dep) { ep_-=dep; }
  void inc_energy(double dep) { ep_+=dep; }

  // Possible Abilities
  void set_radius(double radius) { radius_=radius; }
  void set_weight(double weight) { weight_=weight; }
  void set_base_speed(double base_speed) { base_speed_=base_speed; }

 private:
  double weight_;
  VectorMD velocity_;
  double base_speed_;
  double dash_speed_;
  double max_ep_;
  double ep_;
};
#endif // TWO_WORLD_MALLET_H_
