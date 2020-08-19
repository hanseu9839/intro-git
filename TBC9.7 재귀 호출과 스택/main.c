#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void my_func(int);
int main()
{
	my_func(1);//argument로써 1이 들어간다. 

	return 0;
}

void my_func(int n)//n이 parameter  int n이 매개변수화의 parameter가 있다. 
{
	printf("Level %d, address of variable n = %d\n", n, (int)&n); //ptr - > int casting 

	if (n < 4)
		my_func(n + 1);
	printf("Level %d, address of variable n = %d\n", n, (int)&n);//ptr - > int casting 
}