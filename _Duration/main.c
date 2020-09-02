#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
	Storage duration:
	- static storage duration (���α׷��� ������ �ɶ� �޸𸮿� �ڸ� ��� ���� ������ static�ϰ� �ӹ�����.)
	static keyword���� ���� �ǹ̰� �ٸ���. 
	(Note : 'static' keyword indicates the linkage type , not the storage duration)
	- automatic storage duration //���������� �ǹ��Ѵ�. (�޸𸮷��̾ƿ������� ���ÿ� ����)
	- allocated storage duration //�����Ҵ�� ������ �ִ�. 
	- thread storage duaration // ��Ƽ�����������̴�. 

*/

void count()
{
	int ct = 0;
	printf("cont = %d\n", ct);
	ct++;
}

void static_count()
{
	static int ct = 0; //���α׷��� ���������� �������� �ʴ´�. 
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