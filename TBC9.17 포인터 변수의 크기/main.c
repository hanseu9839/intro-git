#include<stdio.h>

int main()
{
	char a=1;
	float b=3;
	double c=5;

	char* ptr_a = &a;
	float* ptr_b = &b;
	double* ptr_c = &c;

	a = 2;
	b = 4;
	c = 6;
	printf("%zd %zd %zd\n", sizeof(a), sizeof(b), sizeof(c));
	printf("%zd %zd %zd\n", sizeof(ptr_a), sizeof(ptr_b), sizeof(ptr_c));//포인터변수의 주소값의 크기 출력
	printf("%zd %zd %zd\n", sizeof(&a), sizeof(&b), sizeof(&c)); // 실제 주소값을 sizeof
	printf("%zd %zd %zd\n", sizeof(char*), sizeof(float*), sizeof(double*));//자료형의 크기를 sizeof해준다. 
	//int,char,double,float 포인터의 크기는 어떻게 하든 4바이트이다.  
	/*예시) 건물의 크기가 어떻게 되었든 우편번호는 동일하다. 
	이러한 예시를 들어 포인터의 크기가 우편번호와 동일하다는 것이다. 

	*/
	return 0;
}