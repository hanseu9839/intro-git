#define _CRT_SEUCRE_NO_WARNINGS
#include<stdio.h>

#define STRLEN 81

char* custom_string_input(char* st, int n)
{
	char* ret_ptr;
	int i = 0;
	ret_ptr = fgets(st, n, stdin);
	if (ret_ptr)
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n') //clear buffer
				continue;
	}
	return ret_ptr;
}

int main() {
	/* Creating Space */
	//char* name =""; //Error at RUN-TIME
	/*char name[128];
	int result = scanf("%s", name);*/
	//�Է��� �������� �Է¹��� �������� ������ ������ �����͸� �̸� Ȯ���ϰ� �� ������ �����͸� �Է¹޾ƾ����� �Է¹��� ���ִ�. 
	/*
		scanf() vs gets()
		scanf() reads one word
		gets() read one line and and removes \n and add \0
		���͸� �Է��ϴ� ���� ������ �ִ� ������ gets()��� �Լ��� �о���̰ԵǴµ� �̶� �������� �ִ� �ٹٲ޹��� �������ְ� �������� NULLCharacter�� �ְԵȴ�.
		\0 �̰� ��ĳ����
	*/

	//char words[STRLEN] = ""; // Warning without initializations
	////gets(words);	//gets receives pointer. No idea when string ends.
	//gets_s(words, sizeof(words)); //�̷��ԵǸ� ��� �������� �ȴ�. 
	//printf("STRART\n");
	//printf("%s", words);  // no end \n
	//puts(words);//puts() add \n at the end
	//puts("END.");

	//TODO : try char words[5]
	/* fgets() and fputs() */
	//char words[STRLEN] = "";
	//fgets(words, STRLEN, stdin); // does NOT remove \n fgets�� ������ �κп��� ���Ͽ� ���� �����͸� �־��� �� �ִ�. 
	////stdin�� ����ϸ� �ܼ��Էµ� ���� �� �ִ�.
	////fgets�Լ��� �о���� �����Ͱ� ���������� �𸥴ٶ�� �����ϰ� �޾Ƶ��δ�. ������ ����� ���� ���� �� �� �ִ�. 

	////TODO : replace '\n' with '\0'
	//int i = 0;
	//while (words[i] != 'n' && words[i] != '\0')
	//	i++;
	//if(words[i] == '\n')
	//	words[i] = '\0';
	//
	//fputs(words, stdout);
	//fputs("END", stdout);

	/* Small array*/
	//char small_array[5];
	//puts("Enter long strings:");
	////fgets(small_array, 5, stdin); // FILE *_Stream
	//printf("%p\n", small_array);
	//printf("%p\n", fgets(small_array, 5, stdin));
	//fputs(small_array, stdout); 

	/* Repeating short reading */
	//char small_array[5];
	//puts("Enter long strings:");
	//while (fgets(small_array, 5, stdin) != NULL && small_array[0] != '\n')
	//	fputs(small_array, stdout);
	//	//puts(small_array); // What if we ues puts()

	/* scanf() */
	//char str1[6], str2[6];
	//int count = scanf("%5s %5s", str1, str2); //���ڰ��� ���� ��ų���ִ�. 
	////int count = scanf("%6s %6s",str1, str2); // run-time error
	////int count = scanf_s("%5s %5s,str1,6,str2,6);
	//printf("%s|%s \n", str1, str2);

	//char word[6];
	//puts(custom_string_input(word, 6));
	//return 0;

}