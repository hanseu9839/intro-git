#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
	Storage duration:
	- static storage duration (프로그램이 시작이 될때 메모리에 자리 잡고 끝날 때까지 static하게 머무른다.)
	static keyword랑은 조금 의미가 다르다. 
	(Note : 'static' keyword indicates the linkage type , not the storage duration)
	- automatic storage duration //지역변수를 의미한다. (메모리레이아웃에서는 스택에 저장)
	- allocated storage duration //동적할당과 관련이 있다. 
	- thread storage duaration // 멀티스레딩개념이다. 

*/

void count()
{
	int ct = 0;
	printf("cont = %d\n", ct);
	ct++;
}

void static_count()
{
	static int ct = 0; //프로그램이 끝날때까지 없어지지 않는다. 
	printf("static count = %d\n", ct);
	ct++;
}
int main()
{
	count();
	count();
	static_count();
	static_count();
	return 0;
}