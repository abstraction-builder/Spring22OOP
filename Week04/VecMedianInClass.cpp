#include <iostream>
#include <vector>
#include <sstream>
#include <string>

void populateVector(std::vector<int> &vi, int size);
void printVector(const std::vector<int> &vi, int size);
int calculateMedian(std::vector<int> &vi, int size);
int getInteger();

int main(){
  std::vector<int> vi;
  int kNumValues = 5;
  
  populateVector(vi, kNumValues);
  printVector(vi, kNumValues);
  // calculateMedian(vi, kNumValues);
}


void populateVector(std::vector<int> &vi, int size){
  std::cout << "Please enter integers\n";
  for(int i=0; i<size; i++){
    std::cout << "(" << size - i << ") left: ";
    int num = getInteger();
    vi.push_back(num);
  }
}

void printVector(const std::vector<int> &vi, int size){
  for(int i=0; i<size; i++){
    std::cout << vi[i] << " ";
  }
  std::cout << std::endl;
}

int calculateMedian(std::vector<int> &vi, int size){
  // TODO: Calcuate median
}

int getInteger(){
  //TODO: Implement
  // Read an intger from the user.
  // make sure only entered an integer
  while(true){
    std::string str = "";
    std::getline(std::cin, str); 

    int x = 0;
    std::stringstream converter(str);
    if(converter >> x){
       char rem = ' ';
       if(converter >> rem){
        std::cout << "Invalid input. Try again.\n"; 
       }else{
         return x;
       }
    }else{
        std::cout << "Invalid input. Try again.\n"; 
    }
    } 
}