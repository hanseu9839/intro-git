#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h> //Windows, _getch(), _getche()
int main()
{
	char c;

	while ((c = _getche()) != '.') 
//e는 echo의 약자로 콘솔창에 내가 a라고 입력하면 a를 컴퓨터가 그려주는것이다. _getch는 바로 입력하는 것이니라 getchar()이라고함  
		putchar(c);
	return 0;
}