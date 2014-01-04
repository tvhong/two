/*
 * Vector represented in magnitude & direction
 */
#ifndef TWO_WORLD_VECTORMD_H_
#define TWO_WORLD_VECTORMD_H_
#define _USE_MATH_DEFINES

#include "Vector.h"
#include <cmath>

class VectorMD : Vector {
 public:
  VectorMD(double m=0,double d=0):m_(m),d_(d){};
  double x() {return m_ * cos(d_);}
  double y() {return m_ * sin(d_);}
  
  double magnitude() {return m_;}
  double direction() {return d_;}

  void flip_vertical() {d_ = M_PI - d_;}
  void flip_horizontal() {d_ *= -1;}

  void decrease_magnitude(double delta) {m_ -= delta;}
  void multiply_magnitude(double scalar) {m_ *= scalar;}

  void set_magnitude(double newMag) {m_ = newMag;}
  void set_direction(double newDir) {d_ = newDir;}

 private:
  double m_, d_;
};

#endif // TWO_WORLD_VECTORMD_H_
