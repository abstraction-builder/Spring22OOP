#include <iostream> 
#include <iterator>
#include <vector>


void printVector(const std::vector<int> &vi){
    for(std::vector<int>::const_iterator iter = vi.begin(); iter != vi.end(); ++iter){
        std::cout << *iter << " ";
    }
    std::cout << "\n";
}

int main(){
    std::vector<int> vi {1, 2, 3, 4};

    printVector(vi);

    return 0;
}