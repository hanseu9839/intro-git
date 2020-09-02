#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
	/*
		string to integer,double,long 
		atoi(),atof(),atol()
	*/

	//if (argc < 3)
	//	printf("Wrong Usage of %s\n", argv[0]);
	//else
	//{
	//	/* Example 1 */
	//	//int times = atoi(argv[1]);
	//	////atof(),atol()

	//	//for (int i = 0; i < times; i++)
	//	//	puts(argv[2]);

	//	/* Example 2 */
	//	printf("Sum = %d\n", atoi(argv[1]) + atoi(argv[2]));
	//}
	///* 
	//	string to long, unsigned long, double
	//	strtol(),strtoul,strtod()
	//*/
	//char str1[] = "1024Hello";
	//char* end;
	//long l = strtol(str1, &end, 10);
	//printf("%s %ld %s %d\n", str1, l, end, (int)*end);

	//char str2[] = "10FFHello";
	// l = strtol(str2, &end, 16);
	//printf("%s %ld %s %d\n", str2, l, end, (int)*end);

	///*
	//	Number to strings
	//	Use sprintf() instead of itoa(),ftoa()
	//*/

	//char temp[100];
	//puts(_itoa(10, temp, 16));

	//sprintf(temp, "%x", 10); //문자열에다가 printf사용하듯이 그대로 출력을 해서 문자열에 저장해준다. 
	////숫자를 문자를 바꿀때는 sprintf함수를 쓰는것이 더좋다. 
	//puts(temp);

	 char c[10];
	 int i = 10;
	sprintf(c, "%d", i);
	puts(c);
	return 0;
}