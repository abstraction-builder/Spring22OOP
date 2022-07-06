/*Write a program called dynamicAlloc.pp which lets the user enter a positive integer
number N and creates an array of populating it with the first N fibonacci numbers(search for it if
you don’t know what it means). Lastly, you should print the content of the array. Make sure to
follow top-down design and decomposition principles.*/
#include <iostream>
void populating_with_fibonacci(int x,int *A);
void  print_array(int x,int *A);
int main()
{
	int x; 
	std::cout << "Input a positive integer " << std::endl;
	std::cin >> x;
	int* A = new int[x];
	 populating_with_fibonacci(x,A);
	print_array(x, A);
}
void populating_with_fibonacci(int x,int *A)
{
	int sum = 0;
	//TODO:Implement
	//sum of 1st and 2nd
	A[0] = 0; A[1] = 1;
	for (int i = 2; i < x; i++)
	{
		A[i] = A[i - 1] + A[i - 2];
		
	}

}
void print_array(int x,int *A)
{
	//TODO:Implement
	for (int i = 0; i < x; i++)
	{
		std::cout << A[i] << std::endl;
	}
}
