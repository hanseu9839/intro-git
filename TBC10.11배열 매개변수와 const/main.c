#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print_array(const int arr[],const int n)
//이때는 배열의 들어온 배열에다가 직접 값을 더해주기 때문에 리턴값이 없어도 배열의 값이 바껴진다. 

{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void add_value(int arr[],const int n, const int val)
//배열의 값을 바꿔주는 함수이다. 그래서 int arr[]에 const를 붙이면안된다. 
{
	int i;
	for (i = 0; i < n; i++)
		arr[i] += val;
}
int sum(const int ar[], const int n)
//배열의 들어가는 합만 알면되는데 값을 바꾸는 것은 이상한거라고 미리 명확하게 표현하기 위해 const를 사용한다. 
{
	int i;
	int total = 0;
	for (i = 0; i < n; i++)
		total += ar[i];//wrong implementation

	return total;
}

int main()
{
	const int arr[] = { 1, 2, 3, 4, 5 }; //이 배열의 값은 값이 바뀌면안된다. 
	const int n = sizeof(arr) / sizeof(arr[0]); //배열의 사이즈가 바뀔 일이 없어 보인다. 
	
	print_array(arr, 5);
	add_value(arr, 5, 100);
	print_array(arr, 5);

	int s = sum(arr, n);
	printf("sum is %d\n", s);
	print_array(arr, 5);

	return 0;
}

//컴파일러를 최대한 활용하고 실수를 줄이기위해 노력하자 