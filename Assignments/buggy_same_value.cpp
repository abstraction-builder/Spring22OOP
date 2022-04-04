#include <iostream>
#include <fstream>
#include <string>

/* Reads full content of a file */
void readFile(std::string &fname);

int main(void){
	std::string fname = "in.txt";

	readFile(fname);

	return 0;
}

/* Reads full content of a file called 'fname' */
void readFile(std::string &fname){
	std::ifstream instr(fname);

	/**
	 * Warning: Infinite loop
	 */
	while(true){
		int value;
		instr >> value;
		std::cout << value << std::endl;
	}
}
