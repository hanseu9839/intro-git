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
	// VS warns you! NULLCharacter �� ã�� �� ��� ��� ����ϴ� ���̴�. �޸𸮿� �쿬�������ϴ� NULLCharacter
	// ������ ���� ��� ����ȴ�. 

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
	////scanf�� ��ĭ�� ������ ���̻� �о� ������ �ʴ´�. 
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