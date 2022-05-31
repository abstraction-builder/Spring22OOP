#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main(){
	vector<int> vi{1, 12, 54, -2, 7, 11, 8, -56, 10032, 2, 3};

	cout << "Initial vector: " << endl;
	for(auto itr = begin(vi); itr != end(vi); ++itr){
		*itr += 2;
		cout << *itr << " ";
	}	
	cout << "\n";

	sort(begin(vi), end(vi));
	
	cout << "Sorted vector: " << endl;
	for(auto const &b : vi){
		cout << b << " ";
	}
	cout << "\n";

	return 0;
}
