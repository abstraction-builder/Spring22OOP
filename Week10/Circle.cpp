#include "Circle.h"

Circle::Circle(){
      radius = 1;
      countObj++;
}

/*
static int Circle::getObjCount(){
  return countObj;
}
*/

Circle::Circle(double newRadius){
      radius = newRadius;
      countObj++;
}

double Circle::getArea(){
  return 3.14159 * radius * radius;
}

void Circle::toString(void){
      std::cout << "This is circle object with radius  = " << radius << std::endl; 
  }