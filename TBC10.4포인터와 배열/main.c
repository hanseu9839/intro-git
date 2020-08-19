#define _CRT_SEUCRE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[10];
	const int num = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < num; i++)
		arr[i] = (i + 1) * 100;

	int* ptr = arr;//배열의 이름이 배열의 메모리의 첫주소이기때문에 이렇게 사용된다. 

	printf("%p %p %p\n", ptr, arr, &arr[0]);//arr과 &arr[0]과 주소가 같다. 
	//포인터끼리 빼는 것은 거리의 차이를 알 수 있다. 
	ptr += 2;

	printf("%p %p %p\n", ptr, arr + 2, &arr[2]);//이런식으로 arr을 포인터처럼 사용가능하다. 

	//Note: arr += 2; //invalid 배열을 직접 포인터산술연산 불가능

	printf("%d %d %d\n", *(ptr + 1), *(arr + 3), arr[3]);

	// Warning
	printf("%d %d %d\n", *ptr + 1, *arr + 3, arr[3]); 
	//*ptr + 1,*arr + 3은 일단 dereferencing을 한 다음에 뒤에숫자를 더해준게된다. 
	
	for (int i = 0, *ptr = arr; i < num; i++)
	{
		printf("%d %d\n", *ptr++, arr[i]); 
		// 증가연산자가 뒤에 붙으면 *ptr dereferencing을 먼저해준다. 
		//printf("%d %d\n", *(ptr + i), arr[i]);
		//printf("%d %d\n", *ptr + i, arr[i]);
	}
	return 0;
}