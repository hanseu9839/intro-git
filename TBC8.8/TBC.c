#include<stdio.h>

char get_choice(void);
char get_first_char(void);
int get_integer(void);
void count(void);


int main(void)
{
	int user_choice;
	while ((user_choice = get_choice()) != 'q')
	{
		switch (user_choice)
		{
		case 'a':
			printf("Avengers assemble!\n");
			break;
		case 'b':
			putchar('\a');
			break;
		case 'c':
			count();
			break;
		default : 
			//���߰������� ���� ���α׷��� �ڵ尡 ������ �Ǹ� �ȵǴ� �κ��� �ؿ�ó�� ������ 
			printf("Error with %d.\n", user_choice);
			exit(1);
			break; 
		}
	}

	return 0;
}
void count(void)
{
	int n, i;
	printf("Enter an integer:\n");
	n = get_integer();
	for (i = 1; i <= n; ++i)
		printf("%d\n", i);
	while (getchar() != '\n')
		continue;
}
int get_integer(void)
{
	int input;
	char c;
	while (scanf("%d", &input) != 1)
	{
		while ((c = getchar()) != '\n')
			putchar(c);
		printf("is not an integer.\nPlease try again");
	}
	return input;
}
char get_first_char(void)
{
	int ch;
	ch = getchar();
	while (getchar() != '\n')
		continue;

	return ch;
}
char get_choice(void)
{
	int user_input;

	printf("Enter the letter of your choice:\n");
	printf("a. avengers\tb. beep\n");
	printf("c. count\tq. quit\n");

	user_input = get_fist_char();
	while ((user_input < 'a' || user_input >'c') && user_input != 'q')
	{
		printf("Please try again");
		user_input = get_fist_char();
	}
	return user_input;

}