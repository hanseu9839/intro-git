#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
double average(double *arr,int n);
double average(double *, int n);
double average(double arr[],int n);
double average(double [],int n);
*/
//������Ÿ�Ժκп����� �̸��� �� �� �ִ�. 
double average(double *, int n);//�׳� �迭�� �Ѱ��ذŴ�. �ڿ� ������ �Է����ֱ⶧���̴�. 

int main()
{
	double arr1[5] = { 10,13,12,7,8 };//arr1�� �迭�� �̸��� ù��°�ּҸ� ��Ÿ����. 
	//double arr2[5] = { 1.8,-0.2,6.3,13.9,20.5 };
	double arr2[3] = {1.8,-0.2,6.3}; //size is different 

	printf("Address = %p\n", arr1);
	printf("Size = %zd\n", sizeof(arr1));

	printf("Avg = %f\n", average(arr1,5));
	printf("Avg = %f\n", average(arr2,3));
	return 0;
}

double average(double *data_array, int n)//���������� ������ó�� ó�����ȴ�. ,�Լ����� �迭�� ���� ���� �����͸� ����Ѵ�. 
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