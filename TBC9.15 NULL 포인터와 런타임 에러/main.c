#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	/*int a;
	printf("%p\n", &a);
	print("%d\n", a);*/

	/*int* ptr = 1234;

	printf("%p\n", prt);
	printf("%d\n", *ptr);*/

	int* safer_ptr = NULL; // = NULL; ,C++에서는 nullptr 이생겼다. 포인터를 처음 선언 해줄 때 사용해줄지 안해줄지 모르기때문에 NULL넣어주는게 관습이다. 
	int a = 123;
	/*safer_ptr = &a;*/ //우리가 포인터를 사용할 때 확실한 경우가 아니라 확실하지 않은 경우가 더 많다. 
	int b;
	scanf("%d", &b);
	if (b % 2 == 0)
		safer_ptr = &a; //어떤조건에 따라서 런타임에 결정이 될수도 있다. 이프로그램은 아니지만 

	//NULL값을 대입해주는 이유는 애를 사용해도되는지 안되는지 확일할려는 것이다. 보통이런 코딩을 해주는게 일반적이다.
	if (safer_ptr != NULL)
		printf("%p\n", safer_ptr);
	if (safer_ptr != NULL)
		printf("%d\n", *safer_ptr);


	return 0;
}