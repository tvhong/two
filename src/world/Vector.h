/*
 * Vector class represent a direction
 * always have the starting point at (0.0, 0.0)
 */

#ifndef TWO_WORLD_VECTOR_H_
#define TWO_WORLD_VECTOR_H_
class Vector {
 public:
  Vector(double x, double y);

  void multiplyScalar(double scalar);

  double x() { return x_; }
  double y() { return y_; }

  void setX(double x) { x_ = x; }
  void setY(double y) { y_ = y; }

 private:
  double x_, y_;
};
#endif // TWO_WORLD_VECTOR_H_
