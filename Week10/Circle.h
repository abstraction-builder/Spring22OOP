#ifndef C_HEADER
#define C_HEADER

#include <iostream>

class Circle {
public:
  double radius;

  Circle() const;
  Circle(double newRadius);

  double getArea() const;
  void toString(void) const;
};

#endif