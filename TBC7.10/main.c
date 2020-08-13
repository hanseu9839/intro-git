#define _CRT_SECURE_NOWARNINGS
#include<stdio.h>

int main(){
	/* continue */
	//for (int i = 0; i < 10; i++) 
	//{
	//	if (i == 5) //continue를 만나면 continue뒷부분을 실행 시키지않고 for문의 처음으로 돌아감 
	//		continue;

	//	printf("%d", i);
	//}

	/*while and continue*/
	//중간에 무시하고 싶은조건을 continue를 사용해서 나온다. 
	//int count = 0;
	//while (count < 5)
	//{
	//	int c = getchar();
	//	if (c == 'a') //문자가 a인것을 무시하고 5개출력하게끔 만들어줌 
	//		continue;
	//	putchar(c);
	//	count++;
	//}

	/* continue as a placeholder*/
	//무의미한 코드를 짜면 주석을 해주어야한다. 
	/*while (getchar() != '\n')
		continue;*/

	/* Need to use continue ?*/
	//char c; 
	//while ((c = getchar()) != '\n')
	//{
	//	if (c == 'a') //논리구조가 복잡하거나 a말고도 다른문자도 사용해야된다거나 그러면 contiue가 더좋다.
	//		continue;
	//	putchar(c);
	//}
	/* break */
	/*char c; 
	while ((c = getchar()) != '.') {
		putchar(c);
	}*/
	//위에방식보다는 아래방식을 더 쓴다. 가독성이 훨씬 좋기 때문이다. 
	/*while (1)
	{
		char c = getchar();
		if (c == '.')
			break;
		putchar(c);
	}*/

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
				break;

			printf("(%d %d)", i, j);
		}
		printf("\n");
	}
	return 0;
}