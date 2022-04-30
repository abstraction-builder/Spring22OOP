#include <iostream>
#include <fstream>
#include <string>

/* Reads content of file */
void readFile(std::string &fname);

int main(void){
	std::string fname = "in.txt";

	readFile(fname);

	return 0;
}

/* Reads content of file named 'fname' */
void readFile(std::string &fname){
	std::ifstream instr(fname);

	/* Warning: Reads one extra value */
	while(true){
		int value;
		instr >> value;
		std::cout << value << std::endl;

		if(instr.fail())
			break;
	}
}
