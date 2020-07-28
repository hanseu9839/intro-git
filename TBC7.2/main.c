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

	//ch = getchar(); //buffer , ASCII코드로 준다.  
	//getchar과 putchar는 한글자 씩 출력해준다. 
	//putchar(ch); //ASCII코드로 주면 화면에 출력해준다. 

	while ((ch = getchar()) != '\n') // Use '\n' to find the end of a sentence
	//이렇게 해주는 이유는 사용자가 입력한 글자 여러개가 있을 때 줄바꿈을 했다면 문자열의 끝이라는 것을 인식해서 while문 종료하겠다는 것을 의미한다. 
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