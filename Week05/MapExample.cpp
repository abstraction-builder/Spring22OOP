#include <iostream>
#include <string>
#include <map>
#include <sstream>

std::string getLine();
void populateMap(std::map<std::string, int> &mp);
int calculateFrequency(const std::map<std::string, int> &mp);
void printMap(const std::map<std::string, int> &mp);


int main(){
    // TODO: Implement method to count words in user entered sentances
    std::map<std::string, int> userInput;

    // read lines from user till press enter
    populateMap(userInput);

    printMap(userInput);

    // ask user what word they want to find frequency of
    // :int freq = calculateFrquency(userInput);

}

std::string getLine(){
    std::string response;
    std::getline(std::cin, response);
    return response;
}

void populateMap(std::map<std::string, int> &mp){
    // TODO : Implement
    std::cout << "Enter stop to finish the program" << std::endl;
    while(true){
        std::cout << "Please enter a string: ";
        std::string input = getLine();

        if(input.compare("stop") == 0)
            break;

        mp[input]++;
    }

}

int calculateFrequency(const std::map<std::string, int> &mp){
    // TODO : Implement

}

void printMap(const std::map<std::string, int> &mp){
    for(auto itr = mp.begin(); itr != mp.end(); itr++){
        std::cout << itr->first << " " << itr->second << std::endl;
    }
    std::cout << "\n";
}