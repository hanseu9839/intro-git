#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MESSAGE "A symbolic string contant"
#define MAXLENGTH 81

int main()
{
	char words[MAXLENGTH] = "A string in an array";//�ڱ� �޸𸮰����� �������ִ�.
	//words�� MAXLENGTH�� ũ�⸸ŭ ���ڿ��� �ʱ�ȭ ���������ʾƼ� puts���� warning�߻� 
	const char* pt1 = "A pointer to a string";//��򰡿� �ִ� ������ �Ǿ��ִ� ù��° �ּҸ� �����°��̴�. 

	puts("Puts() adds a newline at the end:"); //puts() add \n at the end 
	
	puts(MESSAGE);
	puts(words);
	puts(pt1);
	words[3] = 'p'; //�迭�� ������ ����Ǿ��ֱ⶧���� �ߵȴ�. 
	puts(words);
	//pt1[8] = 'A'; // Error  RunTimeError�߻� String�� ����� �� const����ϴ°� ����. 

	printf("\" To be, or not to be \" Hamlet saiz\n");
	printf("%s %p %c\n", "We", "are", *"excellent programmers");
	//"are"�� %p�� �� �� �ִ� ������ ���ڿ� ��ü�� �迭�� ���Եȴ�. �׷��Ƿ� �ּҸ� ����� �� �ִ�. ���ڿ��� ������ ù���� �ּҰ� ��µȴ�. 
	//"excellent programmers"�� �ּҴ� ���ڿ��� ����� �ּҿ��� ù���� �ּ��̴�. ù��° ������ �ּҿ� ���ؼ� indrections�� �ϸ� e����µȴ�. 

	const char m1[15] = "Love you!"; //�ʱ�ȭ ���ִ� �κ� �̿ܿ� �κ��� �˾Ƽ� NULL Character�� �ʱ�ȭ���ش�. 
	//""�� ���� ���ڿ��� '\0' NULL Character�� �Ⱥٿ����ȴ�. ������ ' '�� �ϳ��� ���ָ� NULL Character�� �ٿ����Ѵ�. 
	for (int i = 0; i < 15; ++i)
		printf("%d ", (int)m1[i]); //
	printf("\n");

	return 0;
}