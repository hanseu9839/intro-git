#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> // getchar() , putchar()

int main(){
	/*
		1. Intoduce getchar(), putchar()
		2. use while loop to process character sequences
		3. Filter a specific character
		4. Convert numbers to asterisks = *
		5. Lower charcters to Upper characters
	*/
	char ch;

	//ch = getchar(); //buffer , ASCII�ڵ�� �ش�.  
	//getchar�� putchar�� �ѱ��� �� ������ش�. 
	//putchar(ch); //ASCII�ڵ�� �ָ� ȭ�鿡 ������ش�. 

	while ((ch = getchar()) != '\n') // Use '\n' to find the end of a sentence
	//�̷��� ���ִ� ������ ����ڰ� �Է��� ���� �������� ���� �� �ٹٲ��� �ߴٸ� ���ڿ��� ���̶�� ���� �ν��ؼ� while�� �����ϰڴٴ� ���� �ǹ��Ѵ�. 
	{		
		if (ch >= 'a' && ch <= 'z') // 'A' =65 ,'a'=97
			ch -= 'a' - 'A';
		else if (ch >= 'A' && ch <= 'Z')
			ch += 'a' - 'A';

		//for(int i = '0'; i <= '9'; ++i)
			/*if(ch >='0' && ch <= '9')
				ch = '*';*/
		
		/*if (ch == 'f'||ch=='F')
			ch = 'X';
		*///else if (ch == 'F')
			//ch = 'X';
		putchar(ch);
		//ch = getchar();
	}
	putchar(ch);
	return 0;
}