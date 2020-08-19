#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;
	a = 123;
	int *a_ptr; // * : asterisk(포인터변수선언) 
	a_ptr = &a; 

	printf("%d %d %p\n", a, *a_ptr, a_ptr); 

	*a_ptr = 456;

	printf("%d %d %p\n", a, *a_ptr, a_ptr); //변수 a의 값이 그대로이다. 

	//b = a_ptr;
	b = *a_ptr;//a_ptr이 가르키고 있는 주소의 값을 가져다가 변수 b에 저장한다. 
	printf("%d\n", b);
	*a_ptr = 789;
	printf("%d\n", b);//b는 그냥 456이나온다. integer이기때문에 값만저장해서 주소를 가져올 수 없다. a랑은 엮이지 않는다. 
	printf("%d %d %p\n", a, *a_ptr, a_ptr, &b); //a랑 b는 주소가 다르다. 그 이유는 다른 object다. 

	b = 12;
	printf("%d\n", b);
	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	a = 1004;
	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	return 0;
}