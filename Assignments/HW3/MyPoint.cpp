#include <iostream>
#include <cmath>
using namespace std;

int main()

{
	float x1,x2,y1,y2,distance;
	
	cout <<"Enter the value for x1 : ";
	cin >> x1;
	cout << endl << endl;
	
	cout <<"Enter the value for x2 : ";
	cin >> x2;
	cout << endl << endl;
	
	cout <<"Enter the value for y1 : ";
	cin >> y1;
	cout << endl << endl;
	
		
	cout <<"Enter the value for y2 : ";
	cin >> y2;
	cout << endl << endl;
	
	
	distance = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
	cout <<"The distance between the two points is : " << distance << endl << endl;
    system("pause");
    return 0;
}
