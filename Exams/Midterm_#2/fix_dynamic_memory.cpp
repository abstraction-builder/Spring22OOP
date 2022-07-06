#include <iostream>

void add2(int x){
	std::cout << x + 2 << std::endl;
}

void askForInput(int &x){
	std::cout << "How many bytes would you like to allocate: ";
	std::cin >> x;
	std::cout << x << " bytes has been alocated " << std::endl;
	std::cout << "#############" << std::endl;
}

int main(){
	int n;
	askForInput(n);

	int *pi = new int[n];
	if(pi==0){
		std::cout << "Memory allocation failed" << std::endl;
		return 0;
	}

	for(size_t i=0; i<n; ++i){
		pi[i] = 2 * i;
	}

	for(size_t i=0; i<n; ++i){
		add2(i);
	}

	delete[] pi;

	return 0;
}
