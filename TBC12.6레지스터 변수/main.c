#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void temp(register int r)
{
	// do something with r
}


int main()
{
	register int r;
	r = 123;

	//int* ptr = &r;//address of operator �� ���� �� ����. 
	return 0;
}