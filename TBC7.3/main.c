#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h> // ctype.h function이라 치면 기능을 볼수 있음 

int main()
{
    int i = 0;
    char str[] = "first line \n second line \n";
    while (!iscntrl(str[i]))
    {
        putchar(str[i]);
        i++;
    }
    return 0;
}
//int main()
//{
//	char ch;
//	while ((ch = getchar()) != '\n') 
//	{
//		if (islower(ch))
//			ch = toupper(ch);
//		else if(isupper(ch))
//			ch = tolower(ch);
//
//		if (isdigit(ch) != 0)//숫자가 true이냐를 나타내주는 것 
//			ch = '*';
//	}
//	return 0;
//}