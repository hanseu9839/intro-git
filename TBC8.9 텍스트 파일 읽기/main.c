#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> //exit()

int main(){

	int c; //������ �о���� ���� ����� ���� 
	FILE *file = NULL; //file�̶�� ���� �����ߴ�. file�� �����ͺ����̴�. 
	//file�����ȿ� �ּҰ� ����ȴ�. FILE�� �о���� stream�� ������ �ּҰ� ����ȴ�. 
	char file_name[] = "my_file.txt";

	file = fopen(file_name, "r");//file�� stream������ 
	if (file == NULL) //������ ������ ����ų�� �ִ°� ����. NULL��, ������ ���°� �����Ҷ� �̷��Ե�
	{
		printf("Failed to open file.\n");
		exit(1); //ġ������ ������ �� ������ �����Ų��. 
	}

	while ((c = getc(file)) != EOF)
		//getc�� getchar�̴�. ������ ���������� ���ڸ� �о���δ�. EOF���������� ��� ��½����ش�. 
		putchar(c);
	fclose(file); //file�� stream�� �ݾ��ش�. 



	return 0;
}