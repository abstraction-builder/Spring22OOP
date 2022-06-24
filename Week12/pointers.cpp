#include <iostream>
#include <string>

int main(){
  int foo = 5;
  int *pFoo = &foo;

  std::cout << pFoo << std::endl;

  return 0;
}