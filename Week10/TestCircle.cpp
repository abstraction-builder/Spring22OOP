#include "Circle.h"

void printCiecleInfo(Circle c);

int main(void){
  Circle c(2);
  printCiecleInfo(c);

  std::cout << "Object count = " << Circle::getObjCount() << std::endl;
  
  return 0;
} 

void printCiecleInfo(Circle &c){
  c.toString();
}