#include <iostream>
#include <sstream>
#include <string>

int getInteger();

int main(void){
  // TODO: Implement
  std::cout << "Please enter an integer: \n";
  int x = getInteger();
  std::cout << "User entered " << x << "\n";

  return 0;
}

int getInteger(){
  //TODO: Implement
  // Read an intger from the user.
  // make sure only entered an integer
  while(true){
    std::string str = "";
    std::getline(std::cin, str); 

    int x = 0;
    std::stringstream converter(str);
    if(converter >> x){
       char rem = ' ';
       if(converter >> rem){
        std::cout << "Invalid input. Try again.\n"; 
       }else{
         return x;
       }
    }else{
        std::cout << "Invalid input. Try again.\n"; 
    }
    } 
}