#include <iostream>
#include <string>
#include <vector>
#include <fstream>

void linesFromFile(std::vector<std::string> &sv, std::string fname){
    // TODO: Populate sv with contents of file named fname
    std::ifstream in(fname);

    while(in.fail()){
        std::string tmp = " ";
        in >> tmp; 
        sv.push_back(tmp);
    }

    if(sv.size() == 0){
        sv.push_back("File was empty");
    }
}


int main(){

    return 0;
}