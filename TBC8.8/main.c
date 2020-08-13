#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
	char c;
	int num;


	
	while (1)
	{
		printf("Enter the letter of your choice\n");
		printf("a. avengers     b. beep\n");
		printf("c. count        q. quit\n");
		scanf("%c", &c);
		if (c == 'a')
			printf("Avegers assemble!\n");

		else if (c == 'b')
			printf("\a");

		else if (c == 'c')
		{
			printf("Enter an integer\n");
			scanf("%d", &num);
			for (int i = 1; i <= num; i++)			
				printf("%d\n", i);
			
		}
		else if (c == 'q')
			break;
		while ((c = getchar()) != '\n')
			continue;
	}
	return 0;
}