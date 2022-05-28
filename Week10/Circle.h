#ifndef C_HEADER
#define C_HEADER

#include <iostream>

class Circle {
public:
  double radius;
  static :int countObj;

  Circle();
  Circle(double newRadius);

  double getArea();
  static int getObjCount(); 

  /* toString methods prints bal */
  void toString(void);
};

#endif