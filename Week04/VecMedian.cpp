#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#define SIZE 5

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
  for(int i=0; i<size; i++){
    
  }
    
}

void populateVector(std::vector<int> &vi, int size){
    for(int i=0; i<size; i++){
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