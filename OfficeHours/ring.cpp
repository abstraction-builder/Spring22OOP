#include <iostream>
#include <deque>
#include <iterator>

void cursorClockwise(std::deque<int> &ring);
void cursorCounterClockwise(std::deque<int> &ring);
void cursorRead(std::deque<int>::iterator itr);
void cursorWrite(std::deque<int>::iterator itr, int x);

int main(){
    // TODO: Simulate ring
    std::deque<int> ring {3,4,5,6,7,8,9,10,11,0,1,2};

    auto coursor = ring.begin();
    cursorRead(coursor);
    cursorWrite(coursor, 15213);
    cursorRead(coursor);
}

void cursorRead(std::deque<int>::iterator itr){
    std::cout << *itr << std::endl;
}

void cursorWrite(std::deque<int>::iterator itr, int x){
    *itr = x;
}