#include "Stack.hpp"

int main(){
  Stack myStack();

  int x = 15213;
  std::cout << "Pushing " << x << "on the stack" << std::endl;
  myStack.push(x);
  std::cout << "Pushing " << x << "on the stack" << std::endl;
  
  x = 27;
  myStack.push(x);
  std::cout << "Pushing " << x << "on the stack" << std::endl;
  
  x = 0.7;
  myStack.push(x);
  std::cout << "Pushing " << x << "on the stack" << std::endl;

  std::cout << "Peeking on stack " << myStack.peek() << std::endl;
  
  x = 777;
  myStack.push(x);
  std::cout << "Pushing " << x << "on the stack" << std::endl;

  std::cout << myStack.pop() << std::endl;
  std::cout << myStack.pop() << std::endl;
  std::cout << "Stakc size = " << myStack.size() << std::endl;
  std::cout << myStack.pop() << std::endl;
  std::cout << myStack.pop() << std::endl;

  return 0;
}