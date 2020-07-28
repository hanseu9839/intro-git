#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
	double d = 3.1415926535879;

	printf("%c\n", 'A');
	printf("%s", "I love you\n");
	printf("Even if there's a small chance, \
we owe this to everyone who's not in this room to try.\n");

	printf("\n");
	printf("%d %i %i %i\n", 1004, 1234,INT_MAX, UINT_MAX); 
	printf("%u %u %u\n", 1024, -1, UINT_MAX);

	printf("\n");
	printf("%f %f %lf\n", 3.141592f, d, d);
	printf("%a %A\n", d, d);
	printf("%e %E\n", d, d);
	
return 0;
}