#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double average(double*, double*);

int main()
{
	double arr1[5] = { 10, 13, 12, 7, 8 };

	printf("Avg = %f\n", average(arr1, arr1 + 5));//배열의 첫번째 주소를 argument로 넣어준다. 

	return 0;
}

double average(double* start, double* end)
{
	int count = end - start;//포인터의 첫번째주소와 마지막주소를 뺴주면 그 차이가 나온다. 
	double avg = 0.0;
	while (start < end)
	{
		avg += *start++;
	}
	avg /= (double)count;
	return avg;
}