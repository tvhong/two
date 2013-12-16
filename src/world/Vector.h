/*
 * Vector interface
 * Purpose: to compare two implementations
 *
 * Conclusion: The VectorMD imp. seems simpler in most operations
 * However, we can still keep the VectorXY and test
 * which has better performance in a real situation.
 */

#ifndef TWO_WORLD_VECTOR_H_
#define TWO_WORLD_VECTOR_H_

class Vector {
 public:
  // Cartesian coordinate, to update position
  virtual double x() = 0;
  virtual double y() = 0;
  
  // Magnitude / Length
  virtual double magnitude() = 0;

  // Direction in 2D plane
  virtual double direction() = 0;

  // Bounce from wall scenario
  virtual void flipVertically() = 0;
  virtual void flipHorizontally() = 0;

  // Convenient for applying fiction
  virtual void decreaseMagnitude(double delta) = 0;

  // Convenient for changing magnitude by a factor
  virtual void multiplyMagnitude(double scalar) = 0;

  // Ability can completely set new mag/dir
  virtual void setMagnitude(double newMag) = 0;
  virtual void setDirection(double newDir) = 0;
};
#endif // TWO_WORLD_VECTOR_H_
