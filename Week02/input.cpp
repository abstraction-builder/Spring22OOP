#include <iostream>
#include <fstream>
#include <string>

void readFile(std::string fname);

int main(void){
  int x = 5;
  while(true){
    std::cout << x << std::endl;
    if(x <= 0){
      break;
    }
    --x;
  }
  
  return 0;
  }