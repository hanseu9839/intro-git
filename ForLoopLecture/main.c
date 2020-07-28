#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define SIZE 5
int main(){
	/* Motivation */
	//int i1 = 0;
	//int i2 = 1;
	//int i3 = 2;
	//// ....

	//printf("%d\n", i1);
	//printf("%d\n", i2);
	//printf("%d\n", i3);
	//// ...
	int sum = 0;
	int my_arr[SIZE];
	printf("Enter %d numbers : ", SIZE);
	//prepare for array data
	for (int i = 0; i < SIZE; ++i)		
		scanf("%d", &my_arr[i]);
			

	for (int i = 0; i < SIZE; ++i)	
		sum += my_arr[i];
	
	printf("Sum = %d\n", sum);
	//TODO: try debugger
	return 0;
}