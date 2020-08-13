#include<stdio.h>

int main(){
	unsigned charNumber = 0, Word = 0, Line = 1;
	char ch;
	printf("Enter text : \n");
	ch = getchar();
	do
	{
		,
		if((ch != ' ') && (ch != '\n'))
			charNumber++;
		else if (ch == ' ')
			Word++;
		else 
			Line++;
	} while ((ch = getchar()) != '.');

	printf("Characters = %u, Words = %u, Lines = %u", charNumber, Word, Line);
	
	return 0;
}