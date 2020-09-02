#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
double average(double *arr,int n);
double average(double *, int n);
double average(double arr[],int n);
double average(double [],int n);
*/
//프로토타입부분에서는 이름을 뺄 수 있다. 
double average(double *, int n);//그냥 배열을 넘겨준거다. 뒤에 개수를 입력해주기때문이다. 

int main()
{
	double arr1[5] = { 10,13,12,7,8 };//arr1의 배열의 이름은 첫번째주소를 나타낸다. 
	//double arr2[5] = { 1.8,-0.2,6.3,13.9,20.5 };
	double arr2[3] = {1.8,-0.2,6.3}; //size is different 

	printf("Address = %p\n", arr1);
	printf("Size = %zd\n", sizeof(arr1));

	printf("Avg = %f\n", average(arr1,5));
	printf("Avg = %f\n", average(arr2,3));
	return 0;
}

double average(double *data_array, int n)//내부적으로 포인터처럼 처리가된다. ,함수에도 배열을 받을 때는 포인터를 사용한다. 
{
	printf("Size = %zd\n", sizeof(data_array));
	double avg = 0.0;
	for (int i = 0; i < n; ++i)
	{
		avg += data_array[i];
	}
	avg /= (double)n;

	return avg;
}