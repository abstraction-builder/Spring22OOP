#include <iostream>
#include <typeinfo>
#include <typeindex>

int main(void){
  int x = 0;
//  std::cout << typeid(x) << "\n";
  std::cout << std::type_index(typeid(int)) << "\n"
}