/*
 * Simple mutable Point class
 * Use to represent points in the coordinate
 */

#ifndef TWO_WORLD_POINT_H_
#define TWO_WORLD_POINT_H_
class Point {
 public:
  Point(double x, double y);

  void move(Vector v);

  double x() { return x_; }
  double y() { return y_; }

 private:
  double x_, y_;
};
#endif // TWO_WORLD_POINT_H_
