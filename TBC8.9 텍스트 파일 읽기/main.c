#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> //exit()

int main(){

	int c; //파일을 읽어오기 위해 선언된 변수 
	FILE *file = NULL; //file이라는 변수 선언했다. file이 포인터변수이다. 
	//file변수안에 주소가 저장된다. FILE을 읽어오는 stream이 변수에 주소가 저장된다. 
	char file_name[] = "my_file.txt";

	file = fopen(file_name, "r");//file의 stream열어줌 
	if (file == NULL) //포인터 변수로 가르킬수 있는게 없다. NULL즉, 파일을 여는걸 실패할때 이렇게됨
	{
		printf("Failed to open file.\n");
		exit(1); //치명적인 오류일 때 강제로 종료시킨다. 
	}

	while ((c = getc(file)) != EOF)
		//getc는 getchar이다. 파일이 끝날때까지 문자를 읽어들인다. EOF만날때까지 계속 출력시켜준다. 
		putchar(c);
	fclose(file); //file의 stream을 닫아준다. 



	return 0;
}