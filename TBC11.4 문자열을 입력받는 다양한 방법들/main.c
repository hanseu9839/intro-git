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
	//입력을 받을려면 입력받을 데이터의 저장할 공간의 데이터를 미리 확보하고 그 공간에 데이터를 입력받아야지만 입력받을 수있다. 
	/*
		scanf() vs gets()
		scanf() reads one word
		gets() read one line and and removes \n and add \0
		엔터를 입력하는 순간 버퍼의 있는 내용을 gets()라는 함수가 읽어들이게되는데 이때 마지막에 있는 줄바꿈문자 제거해주고 마지막에 NULLCharacter가 있게된다.
		\0 이게 널캐릭터
	*/

	//char words[STRLEN] = ""; // Warning without initializations
	////gets(words);	//gets receives pointer. No idea when string ends.
	//gets_s(words, sizeof(words)); //이렇게되면 어디서 끝나는지 안다. 
	//printf("STRART\n");
	//printf("%s", words);  // no end \n
	//puts(words);//puts() add \n at the end
	//puts("END.");

	//TODO : try char words[5]
	/* fgets() and fputs() */
	//char words[STRLEN] = "";
	//fgets(words, STRLEN, stdin); // does NOT remove \n fgets의 마지막 부분에는 파일에 대한 포인터를 넣어줄 수 있다. 
	////stdin을 사용하면 콘솔입력도 받을 수 있다.
	////fgets함수는 읽어들인 데이터가 언제끝난지 모른다라고 생각하고 받아들인다. 문제가 생기는 것을 방지 할 수 있다. 

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
	//int count = scanf("%5s %5s", str1, str2); //문자개수 한정 시킬수있다. 
	////int count = scanf("%6s %6s",str1, str2); // run-time error
	////int count = scanf_s("%5s %5s,str1,6,str2,6);
	//printf("%s|%s \n", str1, str2);

	//char word[6];
	//puts(custom_string_input(word, 6));
	//return 0;

}