#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<limits.h>
int main(){

	unsigned int u_max = UINT_MAX + 1;
	signed int i_max = INT_MAX + 1;

	printf("%d", i_max);
	// 1111 + 1 = 10000 4��Ʈ���
	// 1111 + 1 = X0000 ��������� ����ū���� 
	// ���� �������� -1�� �ϸ� 
	// 0000 - 1 =  ��ġ 10000 - 1 = 1111 �̷��Եȴ�. 

	printf("%u\n", u_max);
	// i to binary representation 
	char buffer[33];
	_itoa(u_max, buffer, 2);

	//print decimal and binary
	printf("decimal: %u\n", u_max);
	printf("binary: %s\n", buffer);

	return 0;
}