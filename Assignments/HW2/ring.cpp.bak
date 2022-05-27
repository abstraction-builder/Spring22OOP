#include <iostream>
#include <iterator>
#include <deque>

void cursorClockwise(std::deque<int> &ring, std::deque<int>::iterator &itr);
void cursorCounterClockwise(std::deque<int> &ring, std::deque<int>::iterator &itr);
void coursorRead(std::deque<int>::iterator &itr);
void coursorWrite(std::deque<int>::iterator &itr, int value);

int main(){
    std::deque<int> ring = {3,4,5,6,7,8,9,10,11,0,1,2};

    auto itr = ring.begin();
    cursorCounterClockwise(ring, itr);
    coursorRead(itr);
    coursorWrite(itr, 15213);
    coursorRead(itr);

    return 0;
}

void cursorClockwise(std::deque<int> &ring, std::deque<int>::iterator &itr){
    auto endItr = ring.end();

    if(itr == ring.begin()){
        --endItr;
        itr = endItr;
    }else{
        --itr;
    }
}

void cursorCounterClockwise(std::deque<int> &ring, std::deque<int>::iterator &itr){
    if(itr == ring.end()){
        itr = ring.begin();
    }else{
        ++itr;
    }
}

void coursorRead(std::deque<int>::iterator &itr){
    // TODO: Implement
    std::cout << *itr << std::endl;

}

void coursorWrite(std::deque<int>::iterator &itr, int value){
    // TODO: Implement
    *itr = value;
}