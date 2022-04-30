#include <iostream>
#include <string>
#include <map>

void pupulateMap(std::map<std::string, int> &myMap);
int printFrequency(std::map<std::string, int> &myMap, const std::string &myStr);
std::string getString();

int main(){
    /**
     * Write a version which counts frequencie of
     * single word inputs. Assign as HW to extend it
     * into lines.
     */

    std::map<std::string, int> myMap;

    // Get inputs from a user and populate map using them
    pupulateMap(myMap);

    // Print frequency
    std::string myStr = "foo";
    printFrequency(myMap, myStr);

    return 0;
}

void pupulateMap(std::map<std::string, int> &myMap){
    std::cout << "Enter strings; Enter stop when done" << std::endl;
    while (true){
        std::string str = getString();
        if(str.compare("stop") == 0){
            break;
        }
        myMap[str] = myMap[str] + 1;
    }
}

int printFrequency(std::map<std::string, int> &myMap, const std::string &myStr){
    if(myMap.empty()){
        std::cout << "Map is empty, no frequency to fetch " << std::endl;
        return -1;
    }

    int frequency = myMap[myStr];
    std::cout << "Frqeuenyce of " << myStr << " is " << frequency << std::endl;

    return frequency;
}

std::string getString(){
    std::string response;
    std::getline(std::cin, response);
    return response;
}