#include <fstream>
#include <iostream>

void readNumbers(){
  std::ifstream readFile("numbers.txt");

  int x;
  readFile >> x;
  int y; 
  readFile >> y;

  std::cout << "Read values are " << x << " and " << y << std::endl;
}

int main(void){
  readNumbers();
  
  return 0;
}