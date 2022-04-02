#include <iostream>
#include <fstream>

int main(){
  int favNum = 15213;
  std::cout << "FavNum = " << favNum << std::endl;

  std::ofstream t("out.txt");
  output << "FavNum = " << favNum + 1 << std::endl;
  
  return 0;
}