#include <iostream>

using std::cout;
using std::cin;

void FibN(int n)
{
	double fib1 = 0, fib2 = 1, i;

	if (n < 1)
	{
		return;		
	}
	
	cout << fib1 << " ";
	
	for (i = 1; i < n; i++) 
	{
		cout << fib2 << " ";
		double next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
	}
}


int main()
{
	int n;
	cout<<"Enter any number: \n";
	cin>>n;
	FibN(n);
	return 0;
}



