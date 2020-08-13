#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '.'

int main()
{
	char c; 
	int n_chars = 0;
	int n_lines = 0;
	int n_words = 0;
	bool word_flag = false;//새로운단어가 시작되지 않았다.
	bool line_flag = false; //새로운 줄이 시작되지 않았다. 

	printf("Enter text :\n");

	while ((c = getchar()) != STOP)
	{
		if (!isspace(c))
			n_chars++;
		if (!isspace(c) && !line_flag)
		{
			n_lines++;
			line_flag = true;
		}
		if (c == '\n')
			line_flag = false;
		if (!isspace(c)  && !line_flag) //새로운 줄이 시작했다는 조건 
		{
			n_words++;
			word_flag = true; //새로운 줄이 시작해서 true로 바꾸어준다. 
		}
		if (isspace(c)) //빈칸을 만나면 새로운 단어를 입력 받을 준비가 된것
		{
			word_flag = false;//new line flag일때도 false로 된다. 
		}
	}
	printf("Characters = %d, Words = %d, Lines = %d\n",n_chars,n_)
}
