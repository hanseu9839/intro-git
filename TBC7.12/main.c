#include<stdio.h>

int main(){
	char c;
	while ((c = getchar()) != '.')
	{
		printf("You Love");

		switch (c) //switch�ȿ� �츮�� ���� ���캸�� ���� ���� �ִ´�. 
			//char,int������ �������� ����� �� �ִ�. 
		{
		case 'a':
		case 'A':
			//�߿��ϰ� �� ������ a�� ���ؼ� �����ϸ� break�ؼ� �����ߵȴ�. break�� ���ٸ� �� ���� 
			printf("apple");
			break;
		case 'b':
		case 'B':
			printf("baseball");
			break;
		case 'c':
		case 'C':
			printf("cake");
			break;
		default: //defalut�������� �ƹ��͵� ���� ������ break�� �ʿ����. 
			printf("nothing");
		}
		printf(".\n");
		while (getchar() != '\n') 
			//�ٹٲ��� �ƴϸ� while���ǿ� �����Ǿ� ���οö󰡱� ������ ��ǻ� �ѱ��ڸ� ��� 
			continue;
	}
	

	return 0;
}