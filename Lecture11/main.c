#include<stdio.h>

int main(){
	//printf("%u\n", sizeof(float));
	//printf("%u\n", sizeof(double)); //float에 두배를 사용해서 double 
	//printf("%u\n", sizeof(long double));

	//float f = 123.456f; //float형은 리터럴로 f를 붙는다. 
	//double d = 123.456;

	//float f2 = 123.456f;
	//double d2 = 123.456f; // float를 double넣을 때는 double이 더 크기 때문에 자동형변환이된다. 

	//int i = 3;
	//float f3 = 3.f; // 3.0f
	//double d3 = 3.; // 3.0

	//float f4 = 1.234E10f;

	//float f5 = 0Xb.ap1; // 소문자e여도 되고 대문자 e여도 된다. 
	//double d5 = 1.0625e0;

	//printf("%f %F %e %E\n", f, f, f, f);
	//printf("%f %F %e %E\n", d, d, d, d);
	//printf("%a %A\n", f5, f5); // 16진수로 출력하는 것 
	//printf("%a %A\n", d5, d5); // 16진수로 출력하는 것 


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
	f = f + 1.234; //1.234가 더블형이다. 
	/* automatic promotion of function arguments */
	// 1. Functions without prototypes(잘 안쓴다.)
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
	//char의 앞부분을 짤라버린다. char은 1바이트로 8비트만 출력할수있기 때문에 8비트를 뺸나머지는 다 날려버린다. 
	//즉, 그러면 82가 나오는데 이것이 R이된다. 
	printf("%c\n", c);
	c = 83.99;
	printf("%c\n", c);

	return 0;
}