#include "Circle.h"

Circle::Circle() const {
      radius = 1;
}

Circle::Circle(double newRadius){
      radius = newRadius;
}

double Circle::getArea() const {
  return 3.14159 * radius * radius;
}

void Circle::toString(void) const {
      std::cout << "This is circle object with radius  = " << radius << std::endl; 
  }