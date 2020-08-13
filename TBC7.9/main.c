#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
int main(){
	//int temp;
	//temp = true ? 1024 : 7; //true에 조건이 들어간다. 조건문에 true이면 콜론에 왼쪽에 있는 값이 대입 
	////ternary operator이다. Conditional Operator이 맞다. 
	//printf("%d\n", temp);

	//temp = false ? 1024 : 7; //false 이면 오른쪽에 있는 값이 대입된다. 
	//printf("%d\n", temp);


	//int a = 1, b = 2;
	//int max = (a > b) ? a : b;
	int number;
	//scanf("%d", &number);
	//const bool is_even = (number % 2 == 0) ? true : false;;
	 (number % 2 == 0) ? printf("Even") : printf("Odd");
	///*if (number % 2 == 0)
	//	is_even = true;
	//else
	//	is_even = false;*/
	// 

	//if (is_even)
	//	printf("Even");
	//else
	//	printf("Odd");

	return 0;
}