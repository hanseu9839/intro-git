#include<stdio.h>
#include<float.h>

void draw(int n);

int main(){

	int i = 5;
	char c = '#'; //#�� ������ ����ȯ�Ǹ� 35
	float f = 7.1f;




	draw(i);
	draw((int)c);
	draw((int)f);

	/*Argument Vs . Parameters*/
	// actual argument, actual parameter --> argument(values)
	// formal argument, formal parameter --> parameter(variables)
	//draw�Լ��� ȣ���Ҷ��� argument�� �μ���θ���. ������ �Լ����� int n���� �������� �Ű���������Ѵ�. 

	 
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
// �ʹ� ū ���ڿ� ��������� ���� ���ڸ� �����ָ� �������ڰ� ��������� 
//b = a - 1.0E20f;
//printf("%f\n", b);

// round-off errors (ex2)
//float a = 0.0f;
//for (int i = 0; i < 100; i++)
//{
//	a = a + 0.01f; 
//	// ������ �����̵Ǽ� 100���� ���ص� �������� �������. 
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
//// �����Ҽ������� ǥ���� �� ���� ���� ���� ����� ���ڰ� ���󰣴�. 
//printf("%e\n", f); // subnormal

//float f = 104.0f;
//printf("%f\n", f);
//f = f / 0.0f;
//printf("%f\n", f);
