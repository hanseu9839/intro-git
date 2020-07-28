#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
	const int secret_code = 337;
	int guess = 0;
	
	
	/*printf("Enter secret code : ");
	scanf("%d", &guess);
	while (guess != secret_code) {
		printf("Enter secret code : ");
		scanf("%d", &guess);
	}* 무조건 한번은 실행해야되기 떄문에 do-while문이 더 좋다. */ 

	do
	{
		printf("Enter scret code : ");
		scanf("%d", &guess);
	}
	while (guess != secret_code);

	printf("Good!");
	return 0;
}