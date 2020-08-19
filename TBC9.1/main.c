#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> // strlen()
#include<stdbool.h>

#define WIDTH 20
#define NAME "Seung-Gyun Han"
#define ADDRESS "Inchoen, Korea"

void print_multiple_char(char ,int , bool );
void print_centered_str(char str[]);

int main()
{
	print_multiple_char('*',WIDTH, true);

	print_centered_str(NAME);
	print_centered_str(ADDRESS);
	print_centered_str("l love you");

	print_multiple_char('*',WIDTH, false);

	return 0;
}

void print_multiple_char(char c,int n_stars, bool print_newline)
{
	for (int i = 0; i < n_stars; i++)
		printf("%c", c);

	if (print_newline)
		printf("\n");
	
}
void print_centered_str(char str[])
{
	int n_blanks = 0;
	n_blanks = (WIDTH - strlen(str)) / 2;
	print_multiple_char(' ', n_blanks, false);
	printf("%s\n", str);
}

