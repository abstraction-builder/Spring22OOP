#include <iostream>

int main(){
    int x = 15213;
    int y = 107;

    const int* pX = &x; 
    pX = &y;

}