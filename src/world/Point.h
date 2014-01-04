/*
 * Simple mutable Point class
 * Use to represent points in the coordinate
 */
#ifndef TWO_WORLD_POINT_H_
#define TWO_WORLD_POINT_H_

class Point {
 public:
  Point(double x, double y) {x_ = x; y_ = y;}

  // CHANGE: from vector to dx & dy, shouldn't use vector
  // as we might have to modify the distance moved
  // if we do time-dependent update (i.e d=s*t)
  // -> have to use a DISLOCATION Vector,
  // not a Speed Vector -> might be troublesome?
  // also note the extra unnecessary dependency
  void move(double dx, double dy) {x_ += dx; y_ += dy;}

  // Possible convenient to relocate the Puck (possible ability?)
  // void set(double x, double y) {x_=x;y_=y;}
  
  double x() const { return x_; }
  double y() const { return y_; }

 private:
  double x_, y_;
};
#endif // TWO_WORLD_POINT_H_
