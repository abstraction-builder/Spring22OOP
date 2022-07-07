#include <iostream>
#include <vector>
#include <string>

int main(){
    std::string s1("Washington");
    std::string s2("Washington");
    std::cout << "The first character in s1 is " << s1[0] << std::endl;
    std::cout << "s1 + s2 is " << (s1+s2) << std::endl;

    std::vector<int> vi;
    vi.push_back(3);
    vi.push_back(5);
    std::cout << "The first element in v is " << vi[0] << std::endl;
}