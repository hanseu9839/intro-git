#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int seconds = 0, minutes = 0, hours = 0;

	while (seconds >= 0) 
	{
	printf("Input seconds : ");
	scanf("%d", &seconds);

		if (seconds >= 0)
		{
		minutes = seconds / 60;
		seconds %= 60;
		hours = minutes / 60;
		minutes %= 60;

		//print(result)
		printf("%d hours , %d minute , %d seconds \n", hours, minutes, seconds);
		}
	}

	printf("Good bye\n");
	return 0;

	
}