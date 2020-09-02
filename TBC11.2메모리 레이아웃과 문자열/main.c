#include<stdio.h>
#include<stdlib.h>
void test_function()
{
	int j;
	printf("stack high \t %llu\n", (unsigned long long) & j);
}

int main()
{	
	/* Array Versus pointer */
	const char* pt2 = "I am a string!.";
	const char* pt3 = "I am a string!.";
	const char* pt4 = "I am a string!!!!!!!!.";
	const char ar1[] = "I am a string!.";
	const char ar2[] = "I am a string!.";
	const char ar3[] = "I am a string!!.";
	
	printf("rodata low \t%llu %llu %llu %llu\n",
		(unsigned long long)pt2, (unsigned long long)pt3, (unsigned long long)pt4, 
			(unsigned long long)"I am a string!.");
	printf("Stack high \t %llu %llu %llu\n",
		(unsigned long long)ar1, (unsigned long long)ar2, (unsigned long long)ar3);// check address numbers!

	/*Memory address check */
	/* Local variables */

	printf("stack high \t %llu %llu %llu\n", 
		(unsigned long long)&pt2,(unsigned long long)&pt3,(unsigned long long)&pt4);

	int i;
	printf("Stack high \t %llu \n",(unsigned long long) & i);

	/* Local variable in a function*/
	test_function();

	/*Dynamic allocation */
	char* p5 = (char*)malloc(sizeof(char) * 100);
	printf("Heap middle \t %llu\n", (unsigned long long)p5);

	char* p6 = (char*)malloc(sizeof(char) * 100);
	printf("Heap middle \t %llu\n", (unsigned long long)p6);

	//ar1++; Error
	return 0;
}