/*
 * Vector interface
 * Purpose: to compare two implementations
 *
 * Conclusion: The VectorMD imp. seems simpler in most operations
 * However, we can still keep the VectorXY and test
 * which has better performance in a real situation.
 * (or just screw it for simplicity)
 */

#ifndef TWO_WORLD_VECTOR_H_
#define TWO_WORLD_VECTOR_H_

class Vector {
 public:
  // Cartesian coordinate, to update position
  //double x() { return x_; }
  //double y() { return y_; }
  virtual double x() = 0;
  virtual double y() = 0;
  
  // Magnitude / Length
  virtual double magnitude() = 0;

  // Direction in 2D plane
  virtual double direction() = 0;

  // Bounce from wall scenario
  virtual void flip_vertical() = 0;
  virtual void flip_horizontal() = 0;

  // Convenient for applying fiction
  virtual void decrease_magnitude(double delta) = 0;

  // Convenient for changing magnitude by a factor
  virtual void multiply_magnitude(double scalar) = 0;

  // Ability can completely set new mag/dir
  virtual void set_magnitude(double newMag) = 0;
  virtual void set_direction(double newDir) = 0;
 private:
  double x_, y_;
};
#endif // TWO_WORLD_VECTOR_H_
