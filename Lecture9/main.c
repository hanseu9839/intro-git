#include<stdio.h>
//#include<stdint.h>
#include<inttypes.h>
int main(){
	int i;
	int32_t i32;
	int_least8_t i8;
	int_fast8_t f8;
	intmax_t imax;
	uintmax_t umax;

	i32 = 1004;

	printf("me32 = %d\n", i32);
	printf("me32 = %" "d" "\n", i32);
	printf("me32 = %" PRId32 "\n", i32);

	return 0;
}