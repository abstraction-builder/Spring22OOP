#include <string>
#include <iostream>

int add2(int x, double y, std::string foo, char c){
  return x + 2;
}

int main(){
  std::string foo("my str");
  int val = add2(2, 2.0, foo, 'c');
  std::cout << val << std::endl;

  return 0;
}