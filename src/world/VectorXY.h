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

  virtual double x() {return x_;}
  virtual double y() {return y_;}
  
  virtual double magnitude() {return sqrt(x_*x_+y_*y_);}

  virtual double direction() {return atan2(x_,y_);}

  virtual void flipVertically() {y_*=-1;}
  virtual void flipHorizontally() {x_*=-1;}

  virtual void decreaseMagnitude(double delta)
    {double m=magnitude();multiplyMagnitude((m-delta)/m);}
  virtual void multiplyMagnitude(double scalar) {x_*=scalar;y_*=scalar;}

  virtual void setMagnitude(double newMag)
    {double d=direction();x_=newMag*cos(d);y_=newMag*cos(d);}
  virtual void setDirection(double newDir)
    {double m=magnitude();x_=m*cos(newDir);y_=m*cos(newDir);}
 private:
  double x_, y_;
};
#endif // TWO_WORLD_VECTORXY_H_
