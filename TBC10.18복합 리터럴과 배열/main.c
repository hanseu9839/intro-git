#include<stdio.h>

#define COLS 4

int sum_1d(int arr[], int n);
int sum_2d(int arr[][COLS], int rows);

int main()
{
	int a = 1;
	3; // Literals are constants that aren't symbolic 
	3.14;
	int b[2] = { 3,4 };
	(int[2]) { 3,4 };
	
	int arr1[2] = { 1,2 };
	int arr2[2][COLS] = { {1,2,3,4},{5,6,7,8} };

	printf("%d\n", sum_1d(arr1, 2));
	printf("%d\n", sum_2d(arr2, 2));
	printf("\n");

	printf("%d\n", sum_1d((int[2]) { 3, 4 }, 2); //배열을 리터럴처럼 바로 집어넣을 수 있음
	//경우에따라서 함수에 이름없이 리터럴해주어서 사용하는게 좋은 경우도 있다. 
	printf("%d\n", sum_2d((int[2][COLS]) { {1, 2, 3, 4}, { 5,6,7,8 } }, 2));

	int* ptr1;
	int(*ptr2)[COLS];
	ptr1 = (int[2]){ 1,2 };
	ptr2 = (int[2][COLS]){ {1,2,3,4},{5,6,7,8} };
	//복합리터럴은 포인터변수에 값을 바로입력해줄 수 있다. 

	return 0;
};
	


int sum_1d(int* arr, int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
		total += arr[i];
	return total;
}
int sum_2d(int arr[][COLS], int rows)
{
	int total = 0;
	for (int r = 0; r < rows; r++)
		for (int c = 0; c < COLS; c++)
			total += arr[r][c];
	return total;
}