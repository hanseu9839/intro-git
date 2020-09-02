#define _CRT_SECURE_NO_WARNINGS
#define TEST "A string from #define"
#include<stdio.h>

void custom_put(const char* str); // Only two lines
int custom_put2(const char* str); // Add \n, return # of characters

int main(){
	//char str[60] = "String array initialized";
	//const char* ptr = "A pointer initialized";

	//puts("String without \\n");
	//puts("END");
	//puts("TEST");
	//puts(TEST + 5);
	//puts(&str[3]); 
	////puts(str[3]); //Error
	//puts(ptr + 3);
	/*
		String without \0
	*/
	//char str[] = {'H','I','!'}; //NO \0 at the end
	//puts(str); 
	// VS warns you! NULLCharacter 를 찾을 수 없어서 계속 출력하는 것이다. 메모리에 우연히존재하는 NULLCharacter
	// 만날때 까지 계속 실행된다. 

	/* puts() and fputs() */
	//char line[100];
	//while (gets(line)) // while(gets(line) != NULL)
	//	puts(line);

	//char line[100];
	//while (fgets(line, 100, stdin))
	//	fputs(line, stdout);
	///*
	//	printf()
	//*/
	//char str[] = "Just do it,do it!";
	//printf("%s\n", str); // \n added 
	//puts(str); // no added \n

	//char input[100] = "";
	//int ret = scanf("%10s", input); //Input : "Just do it, do it!\n" (Note %10s) 
	////scanf는 빈칸을 읽으면 더이상 읽어 들이지 않는다. 
	//printf("%s\n", input); // Output : "Just"
	//ret = scanf("%10s", input); // Reads remaing buffer
	//printf("%s\n", input); // Output : "do"

	/*
		Custom function
	*/
	custom_put("Just ");
	custom_put("Do it!");
	return 0;
}
void custom_put(const char* str) // Only two lines
{
	while (*str != '\0')
		putchar(*str++);
}
int custom_put2(const char* str) // Add \n, return # of characters
{
	int count = 0;
	while (*str != '\0')
	{
		putchar(*str++);
		count++;
	}
	putchar('\n');
	return count;

}