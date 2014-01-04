/*
 * Vector represented in Cartesian coordinate
 */
#ifndef TWO_WORLD_VECTORXY_H_
#define TWO_WORLD_VECTORXY_H_

#include "Vector.h"
#include <cmath>

class VectorXY : public Vector {
 public:
  VectorXY(double x=0,double y=0):x_(x),y_(y){};

  double x() {return x_;}
  double y() {return y_;}
  
  double magnitude() {return sqrt(x_*x_+y_*y_);}

  double direction() {return atan2(x_,y_);}

  void flip_vertical() {y_*=-1;}
  void flip_horizontal() {x_*=-1;}

  void decrease_magnitude(double delta) {
    double m=magnitude();
    multiply_magnitude((m-delta)/m);
  }
  void multiply_magnitude(double scalar) {
    x_*=scalar;
    y_*=scalar;
  }

  void set_magnitude(double newMag) {
    double d=direction();
    x_=newMag*cos(d);
    y_=newMag*cos(d);
  }
  void set_direction(double newDir) {
    double m=magnitude();
    x_=m*cos(newDir);
    y_=m*cos(newDir);
  }
 private:
  double x_, y_;
};
#endif // TWO_WORLD_VECTORXY_H_
