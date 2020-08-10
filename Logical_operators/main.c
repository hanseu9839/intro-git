#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#include<iso646.h>

#define PERIOD '.'

int main(){
	/*
		Logical	operators

		&& : and 
		|| : or 
		! : not 
	*/

	//bool test1 = 3 > 2 || 5 > 6; //true
	//bool test2 = 3 > 2 && 5 > 6; //false
	//bool test3 = !(5 > 6); // true, equivalent to 5 <= 6

	//printf("%d %d %d\n", test1, test2, test3);


	/* Character counting example */


	//char ch;
	//int count = 0;

	//while ((ch = getchar()) != PERIOD)
	//{
	//	//TODO : make exceptions 
	//	if(ch != '\n' && ch !=' ')
	//		count++;
	//}
	//printf("%d", count);

	/*
	Alternatives in iso646.h

	&& : and 
	|| : or 
	!  : not 
	*/
	/*bool test1 = 3 > 2 or 5 > 6;
	bool test2 = 3 > 2 and 5 > 6;
	bool test3 = not(5 > 6);

	printf("%d %d %d\n", test1, test2, test3);*/

	int a = 1, b = 2, c = 3, d = 4;

	a > b && b > c || b > d;
	((a > b) && (b > c)) || (b > d); 

	/*
		Short-circuit
	
	
	*/


	return 0;
}