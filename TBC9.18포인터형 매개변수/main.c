#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap(int* a, int* b)
{
	printf("%p %p\n", &a, &b);//main�� a,b�� swap�� a,b�� �ٸ� object�̴�. '���� ���� ȣ�� call by value'��� �θ���. 
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