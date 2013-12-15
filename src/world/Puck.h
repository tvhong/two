/*
 *
 */
#ifndef TWO_WORLD_PUCK_H_
#define TWO_WORLD_PUCK_H_
class Puck {
 public:
  // TODO: update MAX_SPEED & MIN_SPEED with more reasonable values
  // when we get the game running
  static const double MAX_SPEED = 1.0;
  static const double MIN_SPEED = 0.1;

  Puck(Point center, double radius);

  Point center() { return center_; }
  double radius() { return radius_; }
  double weight() { return weight_; }
  Vector speed() { return speed_; }

  void setSpeed(double speed);

 private:
  Point center_;
  double radius_;
  double weight_;
  // TODO: how do we represent speed?
  Vector speed_;
};
#endif // TWO_WORLD_PUCK_H_
