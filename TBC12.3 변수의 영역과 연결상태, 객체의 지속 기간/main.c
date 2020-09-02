#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/* 
	Variable scopes(visibility)
	- block, function, function prototype, file
*/
//파일영역은 모든함수에 바깥영역에 선언되면 된다.
int g_i = 123; //global variable == file scope를 같는다. 
ing g_j;	//global variable

void func1()
{
	g_i++;
}
void func2()
{
	g_i += 2;
	//local = 456; //Error
}

int main()
{
	int local = 1234;

	func1();
	func2();

	printf("%d\n", g_i);
	printf("%d\n", g_j); // Not initalized? 
	printf("%d\n", local);
	return 0;
}