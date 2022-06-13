#include <iostream>

int main(){
  int x = 15213;
  int y = 10;

  int *const pX = &x;
  std::cout << pX << std::endl;
  
  pX = &y;
  std::cout << pX << std::endl;
}