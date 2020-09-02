#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define ROWS 3
#define COLS 4 

int sum2d_1(int ar[ROWS][COLS]);
int sum2d_2(int ar[][COLS], int row);
// int sum2d_2(int [][COLS], int row);
// int sum2d_2(int (*ar)[COLS], int row); // ar is a SINGLE pointer to the array of COLS ints

int sum2d_3(int* ar, int row, int col);
//int sum2d_3(int *,int,int);

int main()
{
	int data[ROWS][COLS] = {
							{1, 2, 3, 4},
							{5, 6, 7,8}, 
							{9, 0, 1, 2}
							};
	//data라는 배열의 메모리가 얼마나 사용될지는 컴파일할 때 결정이된다. 

	printf("%d\n", data[2][3]);
	int* ptr = &data[0][0];
	printf("%d\n", *(ptr + 3 + COLS * 2));
	int sum =sum2d_3(&data[0][0], 3, 4);
	printf("sum= %d",sum);
	return 0;
}
int sum2d_1(int ar[ROWS][COLS])
{
	int sum = 0;
	for (int j = 0; j < ROWS; j++)
	{
		for (int i = 0; i < COLS; i++)
			sum += ar[j][i];
	}
	return sum;
}
int sum2d_2(int ar[][COLS], int row)
{
	int sum=0;
	for (int j = 0; j < row; j++)
	{
		for (int i = 0; i < COLS; i++)
			sum += ar[j][i];
	}
	return sum;
}
int sum2d_3(int* ar, int rows, int cols)
{
	int sum = 0;
	for (int j = 0; j < rows; j++)
	{
		for (int i = 0; i < cols; i++)
			sum += *(ar + i + cols * j);
	}
	return sum;
}