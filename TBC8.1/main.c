#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h> //Windows, _getch(), _getche()
int main()
{
	char c;

	while ((c = _getche()) != '.') 
//e�� echo�� ���ڷ� �ܼ�â�� ���� a��� �Է��ϸ� a�� ��ǻ�Ͱ� �׷��ִ°��̴�. _getch�� �ٷ� �Է��ϴ� ���̴϶� getchar()�̶����  
		putchar(c);
	return 0;
}