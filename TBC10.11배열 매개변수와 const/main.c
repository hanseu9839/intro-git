#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print_array(const int arr[],const int n)
//�̶��� �迭�� ���� �迭���ٰ� ���� ���� �����ֱ� ������ ���ϰ��� ��� �迭�� ���� �ٲ�����. 

{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void add_value(int arr[],const int n, const int val)
//�迭�� ���� �ٲ��ִ� �Լ��̴�. �׷��� int arr[]�� const�� ���̸�ȵȴ�. 
{
	int i;
	for (i = 0; i < n; i++)
		arr[i] += val;
}
int sum(const int ar[], const int n)
//�迭�� ���� �ո� �˸�Ǵµ� ���� �ٲٴ� ���� �̻��ѰŶ�� �̸� ��Ȯ�ϰ� ǥ���ϱ� ���� const�� ����Ѵ�. 
{
	int i;
	int total = 0;
	for (i = 0; i < n; i++)
		total += ar[i];//wrong implementation

	return total;
}

int main()
{
	const int arr[] = { 1, 2, 3, 4, 5 }; //�� �迭�� ���� ���� �ٲ��ȵȴ�. 
	const int n = sizeof(arr) / sizeof(arr[0]); //�迭�� ����� �ٲ� ���� ���� ���δ�. 
	
	print_array(arr, 5);
	add_value(arr, 5, 100);
	print_array(arr, 5);

	int s = sum(arr, n);
	printf("sum is %d\n", s);
	print_array(arr, 5);

	return 0;
}

//�����Ϸ��� �ִ��� Ȱ���ϰ� �Ǽ��� ���̱����� ������� 