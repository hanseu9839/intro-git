#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Fibonacci sequence
	1, 1, 2, 3, 5, 8, 13, 21, 34 , 55, 89, 144

	ex) fibonnacci(5) = 3 + 2 = fibonacci(4) + fibonacci(3)

*/

int fibonacci(int number);

int main()
{
	for (int count = 1; count < 13; ++count)
		printf("%d ", fibonacci(count));

	return 0;
}

int fibonacci(int number)
{
	if (number > 2)
		return fibonacci(number - 1) + fibonacci(number - 2); // double recursion 
	else
		return 1;
}