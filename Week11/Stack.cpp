#include "Stack.hpp"

void Stack::push(int item){
  stack.push_back(item);
}

int Stack::pop(){
  return stack[stackSize - 1];  
}

void Stack::peek(){
  std::cout <<  stack[stackSize - 1] << std::endl;
}

int Stack::size(){
  return stackSize;
}