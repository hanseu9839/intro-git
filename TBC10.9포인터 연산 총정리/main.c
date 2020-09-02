#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	/*
	Pointer operations
	- Assignment 
	- Value finding (deferencing)
	- Taking an integer to a pointer
	- Incrementing a pointer
	- subtracting an integer from a pointer 
	- Decrementing a pointer
	- Differencing 
	- Comparisons
	*/
	int arr[5] = { 100,200,300,400,500 };
	int* ptr1, * ptr2, * ptr3;
	
	ptr1 = arr;//�����Ϳ��ٰ� �ּҸ� �����Ѵ�. , �Ϲ����� ������ �޸� ������ ������ ������ ��ü�� �ּҿ� ����ѱ���� �Ѵ�. 
	//int i;
	//ptr1 = &i; �Ϲ����̸� ������� �̷������� �ּҸ� �����;��Ѵ�. ������ �迭�� �� ��ü�� �ּ�ó�� �ۿ�ȴ�. 
	printf("%p %d %p\n", ptr1, *ptr1, &ptr1);//dereferencing, Taking a pointer 

	ptr2 = &arr[2]; // Address-of operator &
	printf("%p %d %p\n", ptr2, *ptr2, &ptr2);

	ptr3 = ptr1 + 4; //�迭�� intŸ���̱⶧���� 4����Ʈ������ŭ �����ϴ� ������ 4��������.
	printf("%p %d %p\n", ptr3, *ptr3, &ptr3);


	//Differencing 
	printf("%td\n", ptr3 - ptr1); //Note : t is for pointer difference 

	ptr3 = ptr3 - 4; //Subtracing an integer from a pointer

	printf("%p %d %p\n", ptr3, *ptr3, &ptr3);

	ptr1++; // Incrementing, ptr1 = ptr1 + 1
	ptr1--;
	--ptr1;
	++ptr1;

	if (ptr1 == ptr3)
		printf("Same\n");
	else
		printf("Different");

	double d = 3.14;
	double* ptr_d = &d;
	if (ptr1 == ptr_d) // warning C4133 '==' : incompatible types - from 'doube'
		printf("Same\n");
	else
		printf("Differentr\n");

	return 0;
}