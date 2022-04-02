#include <fstream>
#include <iostream>

void readNumbers(){
  std::ifstream readFile("numbers.txt");
  
  while(true){
    int val;
    readFile >> val;
    if(readFile.fail()){
      break;
    }
    std::cout << "Read --> " << val << std::endl;
  }
}

int main(void){
  readNumbers();
  
  return 0;
}