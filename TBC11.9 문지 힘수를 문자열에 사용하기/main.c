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
	//strchr함수가 '\n'문자가 나오는 첫번째 포인터를 리터럴 해준다.
	if (new_line)
		*new_line = '\0';

	ToUpper(line);
	puts(line);
	printf("%d\n", PuctCount(line));
	return 0;
}

void ToUpper(char* str) //문자열을 받기 위해 사용한다. char타입 포인터를 해주면 
{
	while (*str) // NULLCharacter를 만나면 while문이 중지된다. 
	{
		*str = toupper(*str);//toupper함수에 밑에 기능이 이미 구현이 되어있다. 
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