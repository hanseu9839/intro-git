#include<stdio.h>
#include<stdbool.h>
int main() {

	//int tv, fv;
	//tv = (1 < 2);//realation Expression 관계 표현식  참
	//fv = (1 > 2); // 거짓 

	//printf("True is %d\n", tv);
	//printf("False is %d\n", fv);

	/*int i;
	i = 5;
	i == 5;

	5 = i;
	5 == i;*/

	//while (i = 5) {/*do something*/ };
	//while (i == 5) {/*do something*/ };

	/*_Bool boolean_true = (2 > 1);
	_Bool boolean_false = (1 > 2);

	printf("True is %d\n", boolean_true);
	printf("False is %d\n", boolean_false);

	printf(boolean_true ? "true" : "false");
	printf("\n");
	printf(boolean_false ? "true" : "false");*/

	/* bool bt = true;
	bool bf = false;

	printf("\n");
	printf("True is %d", bt);
	printf("false is %d", bf);*/
	int x = 1, y = 2, z;
	x > y + 2;
	x > (y + 2);

	x = y > 2;
	z = (x > y);

	return 0;
}