#define _CRT_SECURE_NO_WARNINGS
#include "my_print_Functions.h"
#include<stdio.h>

// assume that we have many longer functions
int main()
{
	
	print_hello();
	print_hi();
	print_hello();
	print_str("No one lives forever");
	print_str("Valar morghulis");

	printf("Hello!!");
	return 0;
}