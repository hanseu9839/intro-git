#include<stdio.h>
#include<string.h>
#include<ctype.h> // toupper(), inpunct(),...

#define NUM_LIMIT 1024

void ToUpper(char*);
int PunctCount(const char*);

int main()
{
	char line[NUM_LIMIT];
	char* new_line = NULL;
	fgets(line, NUM_LIMIT, stdin);
	new_line = strchr(line, '\n'); // find first newline
	//strchr�Լ��� '\n'���ڰ� ������ ù��° �����͸� ���ͷ� ���ش�.
	if (new_line)
		*new_line = '\0';

	ToUpper(line);
	puts(line);
	printf("%d\n", PuctCount(line));
	return 0;
}

void ToUpper(char* str) //���ڿ��� �ޱ� ���� ����Ѵ�. charŸ�� �����͸� ���ָ� 
{
	while (*str) // NULLCharacter�� ������ while���� �����ȴ�. 
	{
		*str = toupper(*str);//toupper�Լ��� �ؿ� ����� �̹� ������ �Ǿ��ִ�. 
		/*if(islower(*str))
			*str = toupper(*str);
		*/
		str++;
	}
}

int PunctCount(const char* str)
{
	int ct = 0;
	while (*str)
	{
		if (ispunct(*str))
			ct++;
		str++;
	}
	return ct;
}