#include<stdio.h>

void fit_str(char*, unsigned int);
char* my_strcat(char* destination, const char* source);
int my_strcmp(char* , char* );
int main()
{
	/*
		strlen() : returns length of the string
	*/
	char msg[] = "Just,"" do it!";
	puts(msg);
	printf("Length %d\n", strlen(msg));
	fit_str(msg, 4);
	puts(msg);
	printf("Length %d\n", strlen(msg));
	/*
		strcat() and strncat() : string concatenation 뒤에다가 붙이기
	*/
	char str1[100] = "First string";
	char str2[] = "Second string";

	//strcat(str1, ",");
	//strcat(str1, str2);
	//strncat(str1,str2,2); // Append 2 characters
	/*puts(str1);*/
	char* str = (char*)calloc(100, 1);
	my_strcat(str, "Techie");
	my_strcat(str, "Delight");
	puts(str);

	/*
		strcmp() and strncmp() :  compare string (not characters)
	*/
	printf("%d\n", strcmp("A", "A"));
	printf("%d\n", strcmp("A", "B"));
	printf("%d\n", strcmp("B", "A"));
	printf("%d\n", strcmp("Banana", "Bananas"));
	printf("%d\n", strcmp("Bananas", "Banana"));
	printf("%d\n", strncmp("Bananas", "Banana", 6));
	printf("%d\n",my_strcmp("Ban", "Bana"));

	/*
		strcpy() and strncpy()
	*/

	char dest[100] = "";
	char source[] = "Strat progemming!";
	//dest = source; //Error 
	//dest = "Start something"; //Error
	strcpy(dest, source);
	strncpy(dest, source, 5);
	strcpy(dest, source + 6); // '\0' is NOT added
	strcpy(dest, source);
	strcpy(dest + 6, "coding!");
	put(dest);

	/*
		sprintf()
	*/
	/*char str[100] = "";
	int i = 123;
	double d = 3.14;
	sprintf(str, "%05d.png%f", i, d);
	puts(str);*/
	//capture0000000.png,capture00001.png,...

	printf("%s\n", strchr("Hello, World", 'W'));

	printf("%s\n", strpbrk("Hello, World", "ABCDE"));
	printf("%s\n", strpbrk("Hello, World", "abcde"));

	printf("%s\n", strrchr("Hello, World, Hello, World", "l"));
	return 0;
}

void fit_str(char* str, unsigned int size)
{
	if (strlen(str) > size)
		str[size] = '\0';
}
char* my_strcat(char* destination, const char* source)
{
	char* ptr = destination + strlen(destination);
	while (*source != '\0')
		*ptr++ = *source++;
	*ptr = '\0';

	return destination;
}
int my_strcmp(char* str1, char* str2)
{
	while (*str1) {
		if (*str1 != *str2)
			break;
		str1++;
		str2++;
	}
	return *(const unsigned char*)str1 - *(const unsigned char*)str2;
}