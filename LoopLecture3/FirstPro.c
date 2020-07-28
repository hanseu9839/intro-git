#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define NUM_DAYS 365


//#define  FIRST_CHAR 'A'
//#define  LAST_CHAR 'K'

int main(){
	//const char last_char  = 'L'; // TODO: use scanf()
	//const int num_rows = last_char - FIRST_CHAR + 1;

	//int r; // row loop
	//int c; // character loop
	//printf("FIRST CHAR ENTER");

	//for(r =0; r < num_rows; r++)
	//{
	//	for (c = FIRST_CHAR + r; c < FIRST_CHAR + num_rows; c++)
	//	{
	//		printf("%c ", c);
	//	}
	//	printf("\n");
	//}

	/*char my_chars[] = "Hello, world!";
	int daily_temperature[NUM_DAYS];
	double stock_prices_history[NUM_DAYS];

	printf("%zd\n", sizeof(stock_prices_history));
	printf("%zd\n", sizeof(double) * NUM_DAYS);
	printf("%zd\n", sizeof(stock_prices_history[0]));*/

	//int my_number1 = 1;
	//int my_number2 = 3;
	//int my_number3 = 4;
	//int my_number4 = 2;
	//int my_number5 = 1024;

	int my_numbers[5];

	//my_numbers[0] = 1; // subscripts, indices, offsets
	//my_numbers[1] = 3;
	//my_numbers[2] = 4;
	//my_numbers[3] = 2; 
	//my_numbers[4] = 1024;
	////my_numbers offsets 연속적으로 할당 받은 공간에 첫번쨰에 대응한다. 
	//scanf("%d", my_numbers);
	////my_numbers는 이름자체가 주소이기 떄문에 앰퍼센드를 붙일 필요가없다. 
	////[0]이 &보다 연산자 우선순위가 높아서 괄호를 안해도된다. 
	//printf("%d\n", my_numbers[0]);
	//printf("%d\n", my_numbers[1]);
	//printf("%d\n", my_numbers[2]);
	//printf("%d\n", my_numbers[3]);
	//printf("%d\n", my_numbers[4]);


	///* Runtime Error */
	//my_numbers[5] = 123; // out of bound 
	//my_numbers = 7; //주소의 역활을 하기 때문에 대입할 수가 없다. 

	
	return 0;
}