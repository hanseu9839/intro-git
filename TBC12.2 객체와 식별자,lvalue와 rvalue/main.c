#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	/*
		Object
		- "An object is simply a block of memory that can store a value."(KNK p.487)
		- Object has more developed in C++ and Object Oriented Programming (OOP)
		
		Identifiers //식별자 (변수이름을 의미)
		- Names for variables, functions, macros, and other entities. (KNK p. 25)
	*/
	int var_name = 3; // creates an object called 'var_name'.

	int* pt = &var_name;	//pt is an identifier 
	*pt = 1;				// *pt is not an identifier. *pt designates an object.

	int arr[100];	//arr is an identifier. Is arr an object?
	arr[0] = 7;		// arr[0] is an object 
	//식별자는 아니지만 expreesion을 통해서 메모리 공간을 접근 할 수 있다. 그래서 Object이다. 

	/*
		lvalue is an expression 'referring' to an object (또다른 이름처럼 사용한다.)

		L-value : left side of an assignment 
		R-value : right side, variable, constant , expression
	*/
	var_name = 3; //변수의이름이 내부적으로 가르키고 있는 referring 공간에다가 3이라는 값을 복사해 넣는다. 
	//modifiable lvalue
	int temp = var_name; //var_name에 있는 값을 가져다가 temp주소의 메모리공간에 복사해 넣어줌 


	int* ptr = arr;
	*pt = 7; // * pt is not an identifier but an modifiable lvalue expression 

	int* ptr2 = arr + 2 * var_name; // address rvalue 
	*(arr + 2 * var_name) = 456;	//lvalue expression 

	const char* str = "Constant string"; // str is a modifiable lvalue 
	str = "seconde string"; // "Constant string" = "Second String" // impossible
	//str[0] = 'A'; //Error
	//puts(str);

	char str2[] = "String in an array";
	str2[0] = 'A'; //OK
	//put(str2);

	return 0;
}