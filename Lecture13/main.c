#include<stdio.h>
#include<stdbool.h>
int main(){
	printf("%u\n", sizeof(_Bool)); //1byte �޸𸮿��� �ּҸ� �������� �� �ִ� �ּҴ���  

	_Bool b1;

	b1 = 0; //false
	b1 = 1; //true

	printf("%d\n", b1); 

	bool b2, b3;
	b2 = true;
	b3 = false; // false�� �ƴϸ� true�̴�. 

	printf("%d %d\n", b2, b3);


	return 0;
}