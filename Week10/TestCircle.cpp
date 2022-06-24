#include "Circle.h"

void printCiecleInfo(Circle &c);

int main(void){
  Circle c(2);
  printCiecleInfo(c);

  return 0;
} 

void printCiecleInfo(Circle &c){
  c.toString();
}