#define _CRT_SECURE_NO_WARINGS
#include<stdio.h>
#define PI 3.141592f
#define AI_NAME "Friday" //define���� ����� ���� ���� �빮�ڷ� ������־���Ѵ�. 
int main(){
	//��ȣ�� ��� �� define���� �ϴ� ���� �ƴϴ�. 
	//float const pi = 3.141592f;�̷������� ��밡���ϴ�. 
	float radius, area,circum;
	printf("I'm %s\n", AI_NAME);
	printf("Input radius\n");

	scanf("%f", &radius);

	area = PI * radius * radius; //area = pi*r*r
	circum = 2.0 * PI * radius;


	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circum);
	return 0;
}