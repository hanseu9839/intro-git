#define _CRT_SECURE_NO_WARNINGS;
#include<stdio.h>
#include<float.h>
int main(){
	float min = FLT_MAX;
	float max = -FLT_MAX;
	float sum = 0.0f;
	float input;
	int count = 0;
	

	while (scanf("%f", &input) == 1) //문자열이 입력되면 종료됨 
	{
		
		max = (input > max) ? input : max;
		min = (input < min) ? input : min;
		if (input < 0.0f || input>100.0f)
			continue;
		sum += input;
		count++;
	}
	if (n > 0)
		printf("min = %f, max = %f, abe = %f\n", min, max, sum / n);
	else
		printf("No input\n");
	return 0;
}