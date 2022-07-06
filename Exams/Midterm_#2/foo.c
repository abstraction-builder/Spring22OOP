#include <stdio.h>

int main()
{
	int arr[3] = {1, 54, 432};

	printf("%d\n", *(arr+1));
	printf("%d\n", *arr+1);
	printf("%d\n", *(arr)+1);
	printf("%p\n", &arr+1);

	return 0;
}
