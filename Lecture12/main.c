#include<stdio.h>
#include<float.h>

void draw(int n);

int main(){

	int i = 5;
	char c = '#'; //#은 정수로 형변환되면 35
	float f = 7.1f;




	draw(i);
	draw((int)c);
	draw((int)f);

	/*Argument Vs . Parameters*/
	// actual argument, actual parameter --> argument(values)
	// formal argument, formal parameter --> parameter(variables)
	//draw함수를 호출할때는 argument라 인수라부른다. 하지만 함수에서 int n으로 받을때는 매개변수라고한다. 

	 
	return 0;
}

void draw(int n)
{
	
	while (n-- > 0)
		printf("*");
	printf("\n");
}

// round-off errors(ex1)
//float a, b;
//a = 1.0E20f + 1.0f; 
// 너무 큰 숫자와 상대적으로 작은 숫자를 더해주면 작은숫자가 사라져버림 
//b = a - 1.0E20f;
//printf("%f\n", b);

// round-off errors (ex2)
//float a = 0.0f;
//for (int i = 0; i < 100; i++)
//{
//	a = a + 0.01f; 
//	// 오차가 누적이되서 100번을 더해도 일점영을 못만든다. 
//}
//printf("%f\n", a);

//overflow
/*float max = 3.4028234566e+38F;
printf("%f\n", max);
max = max * 100.0f;
printf("%f\n", max);
*/

//underflow
//float f = 1.401298464e-45F;
//printf("%e\n", f);
//f = f / 100.0f; 
//// 부정소수점으로 표현할 수 없는 작은 값이 생기면 숫자가 날라간다. 
//printf("%e\n", f); // subnormal

//float f = 104.0f;
//printf("%f\n", f);
//f = f / 0.0f;
//printf("%f\n", f);
