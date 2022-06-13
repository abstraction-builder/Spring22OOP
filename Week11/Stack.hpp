#pragma once 

#include <vector>
#include <iostream>

class Stack{
  private:
    std::vector<int> stack;
    int stackSize = stack.size();

  public:
    
    void push(int item);

    int pop();

    void peek();

    int size();

};