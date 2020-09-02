#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MESSAGE "A symbolic string contant"
#define MAXLENGTH 81

int main()
{
	char words[MAXLENGTH] = "A string in an array";//자기 메모리공간을 가지고있다.
	//words를 MAXLENGTH의 크기만큼 문자열을 초기화 시켜주지않아서 puts에서 warning발생 
	const char* pt1 = "A pointer to a string";//어딘가에 있는 저장이 되어있는 첫번째 주소를 가져온것이다. 

	puts("Puts() adds a newline at the end:"); //puts() add \n at the end 
	
	puts(MESSAGE);
	puts(words);
	puts(pt1);
	words[3] = 'p'; //배열은 실제로 저장되어있기때문에 잘된다. 
	puts(words);
	//pt1[8] = 'A'; // Error  RunTimeError발생 String을 사용할 때 const사용하는게 좋다. 

	printf("\" To be, or not to be \" Hamlet saiz\n");
	printf("%s %p %c\n", "We", "are", *"excellent programmers");
	//"are"이 %p를 쓸 수 있는 이유는 문자열 자체가 배열에 대입된다. 그러므로 주소를 출력할 수 있다. 문자열을 저장한 첫번쨰 주소가 출력된다. 
	//"excellent programmers"의 주소는 문자열이 저장된 주소에서 첫번쨰 주소이다. 첫번째 공간의 주소에 대해서 indrections를 하면 e가출력된다. 

	const char m1[15] = "Love you!"; //초기화 해주는 부분 이외에 부분은 알아서 NULL Character로 초기화해준다. 
	//""일 떄는 문자열에 '\0' NULL Character을 안붙여도된다. 하지만 ' '로 하나씩 해주면 NULL Character을 붙여야한다. 
	for (int i = 0; i < 15; ++i)
		printf("%d ", (int)m1[i]); //
	printf("\n");

	return 0;
}