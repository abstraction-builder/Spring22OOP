#include <iostream>
#include <string>

int main(){
    // TODO : Demonstrate .length() .size() .capacity() methods
    std::string str("Liverpool is Champion Foo");

    std::cout << "Size of str is " << str.size() << std::endl;
    std::cout << "Capacity of str is " << str.capacity() << std::endl;
    std::cout << "Length of str is " << str.length() << std::endl;
  
    return 0;
}