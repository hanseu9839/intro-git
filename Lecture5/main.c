#define _CRT_SECURE_NO_WARINGS
#include<stdio.h>
#define PI 3.141592f
#define AI_NAME "Friday" //define으로 사용할 때는 전부 대문자로 사용해주어야한다. 
int main(){
	//기호적 상수 꼭 define으로 하는 것은 아니다. 
	//float const pi = 3.141592f;이런식으로 사용가능하다. 
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