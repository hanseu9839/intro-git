#include<stdio.h>

int main()
{
	long long* ptr = 0; // try double*, long long*, char*, void*
	//void*는 자료형이 없기때문에 사이즈가없기 때문에 포인터 연산이 안된다.
	//void*는 최적화나 하드웨어 작업을 할 때 void*가 사용된다. 
	printf("%p %lld\n", ptr, (long long)ptr);
	ptr += 2;

	//포인터 변수에 1을 더하면 자료형의 크기만큼 커진다.  0애서 -16으로 간다면 문제가 생긴다. 그래도 -도 된다. 
	printf("%p %lld\n", ptr, (long long)ptr);
	
	//ptr = -ptr; // Not working  주소의 값을 음수로 바꿀수가 없다. 
	//ptr = +ptr; // NOt working 주소값이라는 특징 때문에 안되는 연산이다
	
	/* Subtraction */
	int arr[10];
	int* ptr1 = &arr[1], * ptr2 = &arr[3];
	//ptr2 = ptr1 + ptr2; //포인터 주소끼리 더하는 것은 안된다. 
	//ex) 철수가 사는 집 우편번호에 영희가 사는집 우편번호를 더하는 것은 의미가 아무것도없다. 이것과 똑같은 개념이다. 
	int i = ptr2 - ptr1; // 뺴기는 된다. 철수가 사는 301호 와 305호를 뺴주는 개념이다. 즉, 메모리는 쭉늘어져있기때문에 의미가 있다. 
	//포인터끼리의 거리가 얼마나 차이 나는지 알 수 있다. 

	printf("%lld %lld %d\n", (long long)ptr1,(long long) ptr2, i);
	//포인터의 크기차이는 자료형만큼 몇번 갔는가?  ptr1과ptr2의 뺀값을 자료형으로 나누어준것
	return 0;
}