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

	int* safer_ptr = NULL; // = NULL; ,C++������ nullptr �̻����. �����͸� ó�� ���� ���� �� ��������� �������� �𸣱⶧���� NULL�־��ִ°� �����̴�. 
	int a = 123;
	/*safer_ptr = &a;*/ //�츮�� �����͸� ����� �� Ȯ���� ��찡 �ƴ϶� Ȯ������ ���� ��찡 �� ����. 
	int b;
	scanf("%d", &b);
	if (b % 2 == 0)
		safer_ptr = &a; //����ǿ� ���� ��Ÿ�ӿ� ������ �ɼ��� �ִ�. �����α׷��� �ƴ����� 

	//NULL���� �������ִ� ������ �ָ� ����ص��Ǵ��� �ȵǴ��� Ȯ���ҷ��� ���̴�. �����̷� �ڵ��� ���ִ°� �Ϲ����̴�.
	if (safer_ptr != NULL)
		printf("%p\n", safer_ptr);
	if (safer_ptr != NULL)
		printf("%d\n", *safer_ptr);


	return 0;
}