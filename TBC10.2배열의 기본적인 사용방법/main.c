#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MONTHS 12 // symbolic constant, macro

int main()
{
	/* Basic usage */
	int high[MONTHS] = { 2, 5, 11, 18, 23, 27, 29, 30, 26, 20, 12, 4 };//선언과 동시에 초기화 

	for (int i = 0; i < MONTHS; i++)
		printf("%d", high[i]);//indexing해서 square blanket안에다가  첨자를 집어넣어주어 하나의 변수처럼 사용가능 
	printf("\n");

	float avg = 0.0;
	for (int i = 0; i < MONTHS; i++)
		avg += high[i];
	printf("Average = %f\n", avg / (float)MONTHS);

	high[0] = 1;
	high[1] = 2;
	//선언을 해줄 때만 대량의 값을 넣어줄 수 있다. 선언이 끝나면 밑에처럼 사용 불가능
	//high = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }; // Not working 
	//high[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }; // Not working 
	
	/* Addresses */
	printf("%p %p\n", high, &high[0]);
	//high와 &high[0]의 주소는 같다. 왜냐면 배열의 이름이 첫번째 주소이다. 
	for (int i = 0; i < MONTHS; ++i)
		printf("%lld\n", (long long)&high[i]);
	printf("\n");

	/* Compiler doesn't check whether indices are valid */
	//high[12] = 4; 
	//Eror index는 배열의 선언개수에서 하나뺸거 까지 0~11까지 배열이 벗어난걸 사용자에게 알려주고 visualstudio가 알려준다. 
	//high[-1] = 123; //Error

	/* const and array */
	//const int temp = 0;//변수를 선언할 때 변수의 선언 앞이나 중간에 사용할 수 있다. 
	////temp = 4;
	//const int low[12] = { -7, -5, 1, 7, 13, 18, 22, 22, 16 ,9, 2, -5 };

	/*When array is not initialized */
	/*int not_init[4]; //TODO : try static (storage class) 
	for (int i = 0; i < 4; i++)
		printf("%d\n", not_init[i]);*/ //not_init쓰레기 값이 들어있다. 

	/* Partially initalized */
	int insuff[4] = { 2, 4 };
	//일부로 초기화를 한다면 프로그래머가 귀찮아서 0을 입력안할걸로 판단해서 나머지는 0으로 채운다.
	for (int i = 0; i < 4; i++)
		printf("%d\n", insuff[i]);
	

	/* Overlly initialized*/
	//int over[2] = {2,4,8,16};

	/* Omitting size */
	//const int power_of_twos[] = { 1, 2, 4, 8,16,32,64 };
	//printf("%d\n", sizeof(power_of_twos));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(power_of_twos[0]));

	//for (int i = 0; i < sizeof power_of_twos / sizeof power_of_twos[0]; ++i)
	//	printf("%d ", power_of_twos[i]);

	/* Designated initializers*/
	int days[MONTHS] = { 31, 28,[4] = 31,30,31,[1] = 29 ,30,21,44};
	for (int i = 0; i < MONTHS; i++)
		printf("%d ", days[i]);

	/* Specifying Array sizes */
	int arr1[MONTHS]; // Symbolic integer constant 양의 정수만 가능함 [ ] 안에는 
	double arr2[123];
	float arr3[3 * 4 + 1];
	float arr4[sizeof(int) + 1];
	//float arr5[-10]; //No
	//float arr6[0]; //No
	//float arr7[1.5]; //No
	float arr8[(int)1.5]; //Yes

	//int n = 8;
	//float arr9[n]; VisualStudio에서는 안된다. 동적할당으로 구현할 수 있다. 
	return 0;
}