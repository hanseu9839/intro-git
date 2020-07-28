#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<limits.h>
int main(){

	unsigned int u_max = UINT_MAX + 1;
	signed int i_max = INT_MAX + 1;

	printf("%d", i_max);
	// 1111 + 1 = 10000 4비트라면
	// 1111 + 1 = X0000 사라져버림 가장큰값이 
	// 가장 작은값에 -1을 하면 
	// 0000 - 1 =  마치 10000 - 1 = 1111 이렇게된다. 

	printf("%u\n", u_max);
	// i to binary representation 
	char buffer[33];
	_itoa(u_max, buffer, 2);

	//print decimal and binary
	printf("decimal: %u\n", u_max);
	printf("binary: %s\n", buffer);

	return 0;
}