/*
 *
 */
#ifndef TWO_WORLD_MALLET_H_
#define TWO_WORLD_MALLET_H_

#include "Point.h"
#include "Vector.h"

class Mallet {
 public:
  static const double DASH_SPEED;
  static const double BASE_SPEED;

  Mallet(Point center, double radius);

  Point* center() { return center_; }
  double radius() { return radius_; }
  double weight() { return weight_; }
  Vector* speed() { return speed_; }
  double energy() { return ep_; }

  void decEnergy(double dep) { ep_-=dep; }
  void incEnergy(double dep) { ep_+=dep; }
  // Possible Abilities
  void setRadius(double radius) { radius_=radius; }
  void setWeight(double weight) { weight_=weight; }

 private:
  Point* center_;
  double radius_;
  double weight_;
  Vector* speed_;
  double ep_;
};
#endif // TWO_WORLD_MALLET_H_
