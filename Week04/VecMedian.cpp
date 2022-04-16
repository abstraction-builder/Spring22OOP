#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>

#define SIZE 6

int getInteger();
void populateVector(std::vector<int> &vi, int size);
void printMedian(std::vector<int> &vi, int size);
void printVector(const std::vector<int> &vi, int size);

int main(void){
  // TODO: Read 5 values from the user
  // and print the median of those values
  std::vector<int> vi;
  populateVector(vi, SIZE);
  printVector(vi, SIZE);
  printMedian(vi, SIZE);
  
  return 0;
}

void printMedian(std::vector<int> &vi, int size){
  std::sort(vi.begin(), vi.end());
  size_t mid = size / 2;
  double median = 0;
  if(size %2 == 0){
    // If it's length is even
    median = (vi[mid] + vi[mid-1])/2;
    }else{
    // If it's length is odd
    median = vi[mid];
  }
  std::cout << "Median of the vector is " << median << std::endl;
}

void populateVector(std::vector<int> &vi, int size){
  std::cout << "Enter values to populate vector " << std::endl;
    for(int i=0; i<size; i++){
      std::cout << "("<<size - i << ")" << " values left: ";
      int x =  getInteger();
      vi.push_back(x);
    } 
}

int getInteger(){
  while(true){
    std::string line;
    std::getline(std::cin, line);

    std::istringstream converter(line);

    int x;
    if(converter >> x){
      char rem;
      if(converter >> rem){
        std::cout << "Unepected format. Try again\n";
      }else{
        return x;
      }
    }else{
      std::cout << "Invalid format. Try again\n";
    }
  }
}

void printVector(const std::vector<int> &vi, int size){
 for(int i=0; i<size; i++){
   std::cout << vi[i] << " ";
 } 
  std::cout << "\n";
}