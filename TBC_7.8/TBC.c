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
	bool word_flag = false;//���ο�ܾ ���۵��� �ʾҴ�.
	bool line_flag = false; //���ο� ���� ���۵��� �ʾҴ�. 

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
		if (!isspace(c)  && !line_flag) //���ο� ���� �����ߴٴ� ���� 
		{
			n_words++;
			word_flag = true; //���ο� ���� �����ؼ� true�� �ٲپ��ش�. 
		}
		if (isspace(c)) //��ĭ�� ������ ���ο� �ܾ �Է� ���� �غ� �Ȱ�
		{
			word_flag = false;//new line flag�϶��� false�� �ȴ�. 
		}
	}
	printf("Characters = %d, Words = %d, Lines = %d\n",n_chars,n_)
}
