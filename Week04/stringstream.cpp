#include <sstream>
#include <iostream>

int main(void){
  // TODO: Implement strinstream example
  std::string line = "13 14 215.13 Rust";
  std::stringstream stream(line);
  
  std::string result;
  std::getline(stream, result);
  std::cout << result << std::endl;
  
  std::string x = "";
  stream >> x;
  std::cout << "Value of x = " << x << std::endl; 

  double d = 0;
  stream >> d;
  std::cout << "Value of d = " << d << std::endl; 

  std::string str = "";
  stream >> str;
  std::cout << "Value of str = " << str << std::endl; 
  
  return 0;
}