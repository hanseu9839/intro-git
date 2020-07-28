#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h> //fabs() -> 괄호안의 절대값을 리턴해준다. 
int main(){
	/*
		Relational Operators
		<	is less than
		<=	is less than or equal to 
		==	is equal to 
		>= is greater than or equal to 
		> is greater than 
		!= is not eqaul to 
	*/

	int n = 0;
	while (n++ < 5) //n++ < 5 is a relation expression 
		printf("%d", n);
	printf("\n");

	char c = 'A';
	while (c != 'Z')
		printf("%c ", c++);

		const double PI = 3.1415926535897932384626433832795;
		double guess = 0.0;

		printf("Input PI: ");
		scanf("%lf", &guess);
		//while (guess != PI) 정밀하게 맞아떨어져야된다. 
		while(fabs(guess - PI) > 0.01)
		{
			printf("Fool! Try again.\n");
			scanf("%lf", &guess);
		}
		printf("Good!");
	return 0;
}