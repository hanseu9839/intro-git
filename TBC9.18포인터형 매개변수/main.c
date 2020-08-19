#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap(int* a, int* b)
{
	printf("%p %p\n", &a, &b);//main의 a,b와 swap의 a,b는 다른 object이다. '값의 의한 호출 call by value'라고 부른다. 
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 123;
	int b = 456;
	
	printf("%p %p\n", &a, &b);
	swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}