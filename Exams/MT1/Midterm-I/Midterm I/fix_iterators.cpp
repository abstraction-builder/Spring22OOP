int main(){
	vector<int> vi{1, 12, 54, -2, 7, 11, 8, -56, 10032, 2, 3};

	cout << "Initial vector: " << endl;
	for(vector<int>::iterator itr = cbegin(vi); itr != cend(vi); ++itr){
		*itr += 2;
		cout << *itr << " ";
	}	
	cout << "\n";

	sort(cbegin(vi), cend(vi));
	
	cout << "Sorted vector: " << endl;
	for(auto& const b : vi){
		cout << d << " ";
	}
	cout << "\n";

	return 0;
}
