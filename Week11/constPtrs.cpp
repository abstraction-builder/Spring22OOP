#include <iostream>

int main(){
    int x = 15213;
    int y = 107;

    const int* pX = &x; 
    std::cout << pX << std::endl;
    x = 12;
    std::cout << pX << std::endl;

    return 0;
}