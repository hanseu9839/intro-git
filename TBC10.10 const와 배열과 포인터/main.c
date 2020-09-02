#include<stdio.h>

int main()
{
	const double PI = 3.14159;
	//PI = 2.14519

	const int arr[5] = { 1,2,3,4,5 };//const를 앞에 붙이면 배열의 각각의 원소의 값들을 바꿀 수 없게 만들어버림 
	//arr[1] = 123;

	const double arr2[3] = { 1.0,2.0,3.0,4.0 };
	//arr2[0] = 100.0;

	const double*  const pd = arr2;
	//*pd = 3.0;	//pd[0] = 3.0; arr2[0] = 3.0;
	//pd[2] = 1024.0;  // arr2[2] = 1024.0;

	printf("%f %f", pd[2], arr2[2]);
	//pd++; // allowed 주소 값은 바꿔줄 수 있다. 
	printf("%f %f", pd[2], arr2[2]); 
	return 0;
}