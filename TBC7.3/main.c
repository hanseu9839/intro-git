#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h> // ctype.h function�̶� ġ�� ����� ���� ���� 

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
//		if (isdigit(ch) != 0)//���ڰ� true�̳ĸ� ��Ÿ���ִ� �� 
//			ch = '*';
//	}
//	return 0;
//}