#define _CRT_SECURE_NOWARNINGS
#include<stdio.h>

int main(){
	/* continue */
	//for (int i = 0; i < 10; i++) 
	//{
	//	if (i == 5) //continue�� ������ continue�޺κ��� ���� ��Ű���ʰ� for���� ó������ ���ư� 
	//		continue;

	//	printf("%d", i);
	//}

	/*while and continue*/
	//�߰��� �����ϰ� ���������� continue�� ����ؼ� ���´�. 
	//int count = 0;
	//while (count < 5)
	//{
	//	int c = getchar();
	//	if (c == 'a') //���ڰ� a�ΰ��� �����ϰ� 5������ϰԲ� ������� 
	//		continue;
	//	putchar(c);
	//	count++;
	//}

	/* continue as a placeholder*/
	//���ǹ��� �ڵ带 ¥�� �ּ��� ���־���Ѵ�. 
	/*while (getchar() != '\n')
		continue;*/

	/* Need to use continue ?*/
	//char c; 
	//while ((c = getchar()) != '\n')
	//{
	//	if (c == 'a') //�������� �����ϰų� a���� �ٸ����ڵ� ����ؾߵȴٰų� �׷��� contiue�� ������.
	//		continue;
	//	putchar(c);
	//}
	/* break */
	/*char c; 
	while ((c = getchar()) != '.') {
		putchar(c);
	}*/
	//������ĺ��ٴ� �Ʒ������ �� ����. �������� �ξ� ���� �����̴�. 
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