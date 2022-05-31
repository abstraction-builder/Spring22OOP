#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 2;

void getInput(vector<int> vi){
	cout << "Enter integers to average: " << endl;
	int tmp = 0;
	for(size_t i=0; i<SIZE; i++){
		cout << "(" << SIZE - i << ") left: ";
		cin >> tmp;
		vi.push_back(tmp);
	}
}

double calculateAverage(vector<int> vi){
	int sum = 0;
	int size_of_vi = vi.size();

	for(size_t i=0; i<size_of_vi ; i++){
		sum += vi[i];
	}

	return sum / size_of_vi;
}

int main(){
	vector<int> vi;

	getInput(vi);
	auto average = calculateAverage(vi);

	cout << "The average is: " << average << endl;

	return 0;
}
