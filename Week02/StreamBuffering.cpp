#include <iostream>
#include <string>

void testBuffer(std::ostream& os);
void waitForEnter(const std::string& prompt);

int main(){
  //TODO: Implement
  waitForEnter("Enter to continue: ");
  std::cout << "Test cout buffer... " << std::endl;
  testBuffer(std::cout);

  return 0;
}

void waitForEnter(const std::string& prompt){
  std::cout << prompt;
  std::string msg;
  std::getline(std::cin, msg);
  std::cout << std::endl;
}

void testBuffer(std::ostream& os){
  // TODO: Test the buffering of this stream
  os << "Before loop - "; 
  for(int i=0; i < 20000000000; i++){
   // waist time    
  }
  os << "After loop - "; 
}
