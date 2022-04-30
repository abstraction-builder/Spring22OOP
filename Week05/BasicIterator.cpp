#include <iostream>
#include <set>

int main(){
    std::set<int> mySet {1, 2, 3, 4, 5, 6, 7};

    std::set<int>::iterator iter = mySet.begin();
    while(iter != mySet.end()){
        std::cout << *iter << " ";
        ++iter;
    }
    std::cout << "\n";

    return 0;
}