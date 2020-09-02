#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
	Automatic storage class
	- Automatic storage duration, block scope, no linkage 
	//�޸𸮿� �ִٰ� ���ٰ� �ϱ� ������ �ܺο� ������ �� ��������. 
	//���� ��� �ִ� ����̸� ��ã������ ���� ����Ǵµ� ���� ���� ���� ����̸� ����ĥ Ȯ���� ���⶧���� linkage�� �� �� �� ����. 
	- Any variable declared in a block or function header 
*/
void func(int k);

int main() // Note: main() is a function. stackframe�� �Լ��� �ϳ��� ���̴� �޸��� ���� 
{
	auto int a; // Keyword auto : a storage-class specifier
	//c++������ auto��� Ű���尡 ������ �ٸ��ǹ̸� ������. 
	 
	a = 1024;
	//���������� ���α׷��� �˾Ƽ� �ʱ�ȭ�� �������� ���������� ���α׷��� �˾Ƽ� �ʱ�ȭ �����ش�. 
	//printf("%d\n",a);		//what happens if uninitialized?
	//auto int b = a * 3;  //what happens if uninitialized? 

	int i = 1;
	int j = 2;

	printf("i %lld\n", (long long)&i);
	{
		int i = 3; // name hiding 
		printf("i %lld\n", (long long)&i);
		int ii = 123;
		//j is visible here
		printf("j = %d\n", j);
	}
	// ii is not visible here
	printf("i %lld\n", (long long)&i);

	for (int m = 1; m < 2; m++)
		printf("m %lld\n", (long long)&m); // no block?

	func(5); // cannot see any of the variabled define so far
	
	for (int m = 3; m < 4; m++)
	{
		printf("m %lld\n", (long long)&m); // block?
	}
	return 0;
}
void func(int k)
{
	int i = k * 2; 
	// do something with i and k 
	printf("i %lld\n", (long long)&i);
}