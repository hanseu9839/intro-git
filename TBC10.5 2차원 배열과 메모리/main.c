#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[2][3] = { {1,2,3},{4,5,6} };
	//int arr[2][3] = {1,2,3,4,5,6}; 2차원배열도 결국에 1차원배열이기 떄문에 1차원배열처럼 선언가능하다. 
	//int arr[2][3] = {1, 2}; //insufficient initailizer
	printf("%d\n\n", arr[1][1]);

	for (int j = 0; j < 2; ++j)
	{
		for (int i = 0; i < 3; ++i)
			printf("%d ", arr[j][i]);

		printf("\n");
	}
	printf("\n");

	//Note : inner loop uses i, why?
	int* ptr = &arr[0][0];
	for (int k = 0; k < 6; ++k)
		printf("%d ", ptr[k]);
	printf("\n\n");

	printf("%zd %zd\n", sizeof(arr), sizeof(arr[0]));
	printf("\n");
	return 0;
}