#include <iostream>
#include <string>
#include <fstream>

void readLines(){
  std::fstream input("Lines.txt");

  while(true){
    std::string line;
    std::getline(input, line);
    if(input.fail()){
      break;
    }
    std::cout << line << std::endl;
  }
}

int main(){
  readLines();

  return 0;
}