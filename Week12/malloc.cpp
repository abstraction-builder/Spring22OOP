#include <iostream>

const int SIZE = 10;

int main(){
  int arr[3] = {1, 2, 3};
  
  int *foo = (int*)malloc(SIZE * sizeof(int));
  for(int i=0; i<SIZE; i++){
    foo[i] = 15213;
  }

  std::cout << foo[SIZE-1] << std::endl;
  
}