#include <iostream>
#include <string>
#include <ofstream>

using namespace std;

void greetUser(std::string msg);
void writeToFile(void);

int main(void){
  std::string msg = "Hey there";

  greetUser(msg);
  writeToFile();
  
  return 0;
}

void greetUser(std::string msg){
  std::cout << msg << std::endl;
}

void writeToFile(void){
  std::fstream out("my_file_2.txt");

  out << 15 << " " << 213 << std::endl;
}
