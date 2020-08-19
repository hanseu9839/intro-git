#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MONTHS 12 // symbolic constant, macro

int main()
{
	/* Basic usage */
	int high[MONTHS] = { 2, 5, 11, 18, 23, 27, 29, 30, 26, 20, 12, 4 };//����� ���ÿ� �ʱ�ȭ 

	for (int i = 0; i < MONTHS; i++)
		printf("%d", high[i]);//indexing�ؼ� square blanket�ȿ��ٰ�  ÷�ڸ� ����־��־� �ϳ��� ����ó�� ��밡�� 
	printf("\n");

	float avg = 0.0;
	for (int i = 0; i < MONTHS; i++)
		avg += high[i];
	printf("Average = %f\n", avg / (float)MONTHS);

	high[0] = 1;
	high[1] = 2;
	//������ ���� ���� �뷮�� ���� �־��� �� �ִ�. ������ ������ �ؿ�ó�� ��� �Ұ���
	//high = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }; // Not working 
	//high[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }; // Not working 
	
	/* Addresses */
	printf("%p %p\n", high, &high[0]);
	//high�� &high[0]�� �ּҴ� ����. �ֳĸ� �迭�� �̸��� ù��° �ּ��̴�. 
	for (int i = 0; i < MONTHS; ++i)
		printf("%lld\n", (long long)&high[i]);
	printf("\n");

	/* Compiler doesn't check whether indices are valid */
	//high[12] = 4; 
	//Eror index�� �迭�� ���𰳼����� �ϳ��A�� ���� 0~11���� �迭�� ����� ����ڿ��� �˷��ְ� visualstudio�� �˷��ش�. 
	//high[-1] = 123; //Error

	/* const and array */
	//const int temp = 0;//������ ������ �� ������ ���� ���̳� �߰��� ����� �� �ִ�. 
	////temp = 4;
	//const int low[12] = { -7, -5, 1, 7, 13, 18, 22, 22, 16 ,9, 2, -5 };

	/*When array is not initialized */
	/*int not_init[4]; //TODO : try static (storage class) 
	for (int i = 0; i < 4; i++)
		printf("%d\n", not_init[i]);*/ //not_init������ ���� ����ִ�. 

	/* Partially initalized */
	int insuff[4] = { 2, 4 };
	//�Ϻη� �ʱ�ȭ�� �Ѵٸ� ���α׷��Ӱ� �����Ƽ� 0�� �Է¾��Ұɷ� �Ǵ��ؼ� �������� 0���� ä���.
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
	int arr1[MONTHS]; // Symbolic integer constant ���� ������ ������ [ ] �ȿ��� 
	double arr2[123];
	float arr3[3 * 4 + 1];
	float arr4[sizeof(int) + 1];
	//float arr5[-10]; //No
	//float arr6[0]; //No
	//float arr7[1.5]; //No
	float arr8[(int)1.5]; //Yes

	//int n = 8;
	//float arr9[n]; VisualStudio������ �ȵȴ�. �����Ҵ����� ������ �� �ִ�. 
	return 0;
}