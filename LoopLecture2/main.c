#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
	int i;
//	i = 1;
//	while (i < 5)  // infiniteloop
//		printf("Hi!\n"); // interation

	/*i = 1;
	while (i < 5)
	{
		printf("i before = %d\n", i);
		i++;
		printf("i after = %d\n", i);
	}*/

	i = 10;
	while (i++ < 5) //cannot enter
	{
		printf("Hi\n");
	}
	/* Common mistakes */
	//i = 0;
	//while (i < 3)
	//{
	//	printf("%i\n", i);
	//	i++; // indenting
	////}
	//i = 0;
	//while (i++ < 3); // nullstatement
	//printf("%i\n", i);

	//while (scanf(% d, &i) == 1)
	//	; //null statement 
	//do something(?)
}