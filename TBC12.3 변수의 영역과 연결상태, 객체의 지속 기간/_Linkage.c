#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
	Linkage
	Variable with block scope,function scope, or function prototype scope
	- No linkage

	File scope variable 
	- External or internal linkage
*/
//translation unit 
int el; // file scope with external linkage(global variable)
static int il;
//�տ� 

void testLinkage();//Linking�ϴ� �� 

int main()
{
	el = 1024;

	testLinkage();

	printf("%d\n", el);

	return 0;
}