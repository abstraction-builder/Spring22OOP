#include <iostream>

int addition(int x, int y){
  return x + y;
}

int sub(int x, int y){
  return x - y;
}

int doArithmetic(int x, int y, int (*foo)(int op1, int op2)){
  return foo(x, y);
}

class Foo{
  int foo = 0;
  char c = 'A';

  Foo(){
    foo = 15213;
  }
};

int main(){
  int op1 = 2;
  int op2 = 3;
  
  int result = doArithmetic(op1, op2, addition); 
  std::cout << op1 << " + " << op2 << " = " << result << std::endl;
  
  int result2 = doArithmetic(op1, op2, sub); 
  std::cout << op1 << " - " << op2 << " = " << result2 << std::endl;

  int x = 12;
  int *pX = &x;
  
  Foo foo1;
  Foo *pFoo = foo1;
  
  
  return 0;
}