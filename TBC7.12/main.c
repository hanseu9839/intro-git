#include<stdio.h>

int main(){
	char c;
	while ((c = getchar()) != '.')
	{
		printf("You Love");

		switch (c) //switch안에 우리가 값을 살펴보고 싶은 것을 넣는다. 
			//char,int형같은 정수형만 사용할 수 있다. 
		{
		case 'a':
		case 'A':
			//중요하게 볼 성질은 a에 대해서 실행하면 break해서 나가야된다. break가 없다면 쭉 실행 
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
		default: //defalut다음에는 아무것도 없기 떄문에 break가 필요없다. 
			printf("nothing");
		}
		printf(".\n");
		while (getchar() != '\n') 
			//줄바꿈이 아니면 while조건에 충족되어 위로올라가기 때문에 사실상 한글자만 출력 
			continue;
	}
	

	return 0;
}