#include<stdio.h>
#include<stdbool.h>
int main(){
	printf("%u\n", sizeof(_Bool)); //1byte 메모리에서 주소를 배정받을 수 있는 최소단위  

	_Bool b1;

	b1 = 0; //false
	b1 = 1; //true

	printf("%d\n", b1); 

	bool b2, b3;
	b2 = true;
	b3 = false; // false가 아니면 true이다. 

	printf("%d %d\n", b2, b3);


	return 0;
}