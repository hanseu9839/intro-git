#include<stdio.h>

int main(){
	//printf("%u\n", sizeof(float));
	//printf("%u\n", sizeof(double)); //float�� �ι踦 ����ؼ� double 
	//printf("%u\n", sizeof(long double));

	//float f = 123.456f; //float���� ���ͷ��� f�� �ٴ´�. 
	//double d = 123.456;

	//float f2 = 123.456f;
	//double d2 = 123.456f; // float�� double���� ���� double�� �� ũ�� ������ �ڵ�����ȯ�̵ȴ�. 

	//int i = 3;
	//float f3 = 3.f; // 3.0f
	//double d3 = 3.; // 3.0

	//float f4 = 1.234E10f;

	//float f5 = 0Xb.ap1; // �ҹ���e���� �ǰ� �빮�� e���� �ȴ�. 
	//double d5 = 1.0625e0;

	//printf("%f %F %e %E\n", f, f, f, f);
	//printf("%f %F %e %E\n", d, d, d, d);
	//printf("%a %A\n", f5, f5); // 16������ ����ϴ� �� 
	//printf("%a %A\n", d5, d5); // 16������ ����ϴ� �� 


	/* promotions in assignments */
	short s = 64;
	int i = s;

	float f = 3.14f;
	double d = f;

	/* demotion in assignments */
	d = 1.25;
	f = 1.25;
	//f = 1.123;

	/* ranking of types in operations */
	//long double > double > float
	//unsigned long long,long long 
	//unsigned long, long 
	//short int , unsigned short int 
	// signed char, char, unsigned char 
	// _Bool
	d = f + 1.234;
	f = f + 1.234; //1.234�� �������̴�. 
	/* automatic promotion of function arguments */
	// 1. Functions without prototypes(�� �Ⱦ���.)
	// 2. Variadic functions   

	/* casting operators */
	/* d = (double)3.14f;
	    i = 1.6 + 1.7;
		i = (int)1.6 + (int)1.7;*/

	/*more example */
	char c;
	//int i;
	//float f;
	f = i = c = 'A'; // 65
	printf("%c %d %f\n", c, i, f);
	c = c + 2; // 'C',67
	i = f + 2 * c;// 65.0f +2*67
	printf("%c %d %f\n", c, i, f); //199
	c = 1106; // demolition , 1106 = 0b10001010010, 0b01010010 = 1106 % 256 = 82 ='R'
	//char�� �պκ��� ©�������. char�� 1����Ʈ�� 8��Ʈ�� ����Ҽ��ֱ� ������ 8��Ʈ�� �A�������� �� ����������. 
	//��, �׷��� 82�� �����µ� �̰��� R�̵ȴ�. 
	printf("%c\n", c);
	c = 83.99;
	printf("%c\n", c);

	return 0;
}