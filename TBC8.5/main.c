#define _CRT_SEUCRE_NO_WARNINGS
#include<stdio.h>

void display(char ch, int lines, int width);

int main(){
	char ch;
	int rows, cols;
	/*while (1)
	{
		scanf("%c %d %d\n", &ch, &rows, &cols);
		while ((ch = getchar()) != '\n')
			continue;
		display(ch, rows, cols);
		if (ch == '\n')
			break;
	}*/

	while ((ch = getchar()) != '\n')
	{
		scanf("%d %d", &rows, &cols);
		while ((ch = getchar()) != '\n')
			continue;
		display(ch, rows, cols);
		printf("Input another character and two integers:");
		printf("Press Enter to quit");
	}


	return 0;
}

void display(char ch, int lines, int width)
{
	int row, col;
	for (int row = 1; row <= lines; row++)
	{
		for (int col = 1; col < width; col++)
		{
			putchar(ch);
		}
		putchar('\n');
	}

}