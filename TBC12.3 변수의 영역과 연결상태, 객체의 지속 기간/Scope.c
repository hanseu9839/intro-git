#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
	Variable scopes (visibility)
	-	block, function prototype, file.
*/

void f1(int hello, double world); // to the end of the prototype declaration 
//

double func_block(double d)
{
	double p = 0.0;
	
	int i;
	for (i = 0; i < 10; i++)
		//for(int i=0;i<10;i++) // C99
	{
		double q = d * i;
		p *= q;
		if (i == 5)
			goto hello;
	}
hello:
	printf("Hello World\n");

	return p;
}