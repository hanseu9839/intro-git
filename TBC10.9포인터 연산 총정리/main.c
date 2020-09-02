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
	
	ptr1 = arr;//포인터에다가 주소를 대입한다. , 일반적인 변수와 달리 포인터 변수는 변수명 자체가 주소와 비슷한기능을 한다. 
	//int i;
	//ptr1 = &i; 일반적이면 변수라면 이런식으로 주소를 가져와야한다. 하지만 배열은 그 자체가 주소처럼 작용된다. 
	printf("%p %d %p\n", ptr1, *ptr1, &ptr1);//dereferencing, Taking a pointer 

	ptr2 = &arr[2]; // Address-of operator &
	printf("%p %d %p\n", ptr2, *ptr2, &ptr2);

	ptr3 = ptr1 + 4; //배열이 int타입이기때문에 4바이트공간만큼 차지하는 공간을 4개지난다.
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