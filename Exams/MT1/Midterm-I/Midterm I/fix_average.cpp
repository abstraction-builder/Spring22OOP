const int SIZE = 10;

void getInput(){
	cout << "Enter integers to average: " << endl;
	for(size_t i=0; i<SIZE; i++){
		cout << "(" << SIZE - i << ") left: ";
		cin >> tmp;
		vi.push_back(tmp);
	}
}

double calculateAverage(vector<int> vi){
	for(size_t i=0; ; i++){
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
