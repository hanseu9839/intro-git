#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
	Automatic storage class
	- Automatic storage duration, block scope, no linkage 
	//메모리에 있다가 없다가 하기 때문에 외부에 연결을 할 수가없다. 
	//집에 계속 있는 사람이면 애찾을려면 집에 가면되는데 집에 거의 없는 사람이면 허탕칠 확률이 높기때문에 linkage를 할 수 가 없다. 
	- Any variable declared in a block or function header 
*/
void func(int k);

int main() // Note: main() is a function. stackframe은 함수의 하나에 쌓이는 메모리의 존재 
{
	auto int a; // Keyword auto : a storage-class specifier
	//c++에서는 auto라는 키워드가 완전히 다른의미를 가진다. 
	 
	a = 1024;
	//전역변수는 프로그램이 알아서 초기화를 해주지만 지역변수는 프로그램이 알아서 초기화 안해준다. 
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