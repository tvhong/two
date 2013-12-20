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
  virtual double x() {return m_*cos(d_);}
  virtual double y() {return m_*sin(d_);}
  
  virtual double magnitude() {return m_;}

  virtual double direction() {return d_;}

  virtual void flipVertically() {d_*=-1;}
  virtual void flipHorizontally() {d_=M_PI-d_;}

  virtual void decreaseMagnitude(double delta) {m_-=delta;}
  virtual void multiplyMagnitude(double scalar) {m_*=scalar;}

  virtual void setMagnitude(double newMag) {m_=newMag;}
  virtual void setDirection(double newDir) {d_=newDir;}
 private:
  double m_, d_;
};

#endif // TWO_WORLD_VECTORMD_H_
