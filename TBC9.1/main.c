#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define WIDTH 20
#define NAME "Seung-Gyun Han"
#define ADDRESS "Inchoen, Korea"
void print_var(int n_stars);
int main(){
	print_var(WIDTH);

	printf("   %s\n", NAME);

	printf("   %s\n", ADDRESS);

	print_var(WIDTH);
	return 0;
}

void print_var(int n_stars)
{
	for (int i = 0; i < n_stars; i++)
	{
		printf("*");
	}
	printf("\n");
}


