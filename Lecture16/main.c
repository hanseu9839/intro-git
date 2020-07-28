#include<stdio.h>

struct MyStruct
{
	int i;
	float f;
};

int main(){
	printf("%zu\n", sizeof(struct MyStruct));

	//int a = 0;
	//unsigned int int_size1 = sizeof a;  //변수이름으로 sizeof를 알 수 있다. 
	//unsigned int int_size2 = sizeof(int);
	//unsigned int int_size3 = sizeof(a); //함수처럼 사용하는 경우가 많다. 

	//size_t int_size4 = sizeof(a); 
	////다른프로그램에서 이식성을 높이기 위해서 사용, size_t가 최근에 많이사용함 
	//size_t float_size = sizeof(float); 
	////size_t 대응 하는 fomat지정자는 %zu이다. 

	//printf("size of int type is %u bytes.\n", int_size1);
	//printf("size of int type is %zu bytes.\n", int_size4);
	//printf("size of float type is %zu bytes\n", float_size)


	//2.sizeof arrays
	//int int_arr[30]; // int_arr[0] = 1024 
	//int  *int_ptr = NULL;
	//int_ptr = (int*)malloc(sizeof(int) * 30);

	//printf("size of array = %zu bytes\n", sizeof(int_arr));

	//printf("size of pointer = %zu bytes\n", sizeof(int_ptr));

	//3.sizeof character array
	//char c = 'a'; 
	//char string[10]; // maximally 9 character + '/0'(null character)

	//size_t char_size = sizeof(char);
	//size_t str_size = sizeof(string);

	//printf("Size of char type is %zu bytes.\n", char_size);
	//printf("Size of string type is %zu bytes.\n", str_size);

	return 0;
}