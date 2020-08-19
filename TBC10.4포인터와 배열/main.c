#define _CRT_SEUCRE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[10];
	const int num = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < num; i++)
		arr[i] = (i + 1) * 100;

	int* ptr = arr;//�迭�� �̸��� �迭�� �޸��� ù�ּ��̱⶧���� �̷��� ���ȴ�. 

	printf("%p %p %p\n", ptr, arr, &arr[0]);//arr�� &arr[0]�� �ּҰ� ����. 
	//�����ͳ��� ���� ���� �Ÿ��� ���̸� �� �� �ִ�. 
	ptr += 2;

	printf("%p %p %p\n", ptr, arr + 2, &arr[2]);//�̷������� arr�� ������ó�� ��밡���ϴ�. 

	//Note: arr += 2; //invalid �迭�� ���� �����ͻ������ �Ұ���

	printf("%d %d %d\n", *(ptr + 1), *(arr + 3), arr[3]);

	// Warning
	printf("%d %d %d\n", *ptr + 1, *arr + 3, arr[3]); 
	//*ptr + 1,*arr + 3�� �ϴ� dereferencing�� �� ������ �ڿ����ڸ� �����ذԵȴ�. 
	
	for (int i = 0, *ptr = arr; i < num; i++)
	{
		printf("%d %d\n", *ptr++, arr[i]); 
		// ���������ڰ� �ڿ� ������ *ptr dereferencing�� �������ش�. 
		//printf("%d %d\n", *(ptr + i), arr[i]);
		//printf("%d %d\n", *ptr + i, arr[i]);
	}
	return 0;
}