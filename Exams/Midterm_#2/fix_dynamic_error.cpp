#include <iostream>

using namespace std;

void askForInput(int &x){
	std::cout << "How many bytes would you like to allocate: ";
	std::cin >> x;
	std::cout << x << " bytes has been alocated " << std::endl;
	std::cout << "\n" << std::endl;
}

int main(){
	int n;
	askForInput(n);

	int *pi = new int[n];
	if(pi){
		std::cout << "Memory allocation " << std::endl;
		return 0;
	}

	for(size_t i=0; i<n; ++i){
		pi[i] = 2 * i;
	}

	for(size_t i=0; i<n; ++i){
	
	}

	return 0;
}
