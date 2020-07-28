#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
	///*
	//	+=, -=, *=, /= , %=
	//*/
	//int i = 1024;
	//i = i + 10;
	//i += 10;
	//i %= 4;

	//i = i * (i + 2);
	//i *= 1 + 2;
	//i *= (1 + 2); // check precedence
//for(int i=0;i < 10;i++)

	//for (int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n)
	//	printf("%d %d\n", n, nsqr); 
	//Note that commas in printf() are not comma operators
	//but sparators

	/*int i, j;
	i = 1;
	i++, j = i;
	printf("%d %d\n", i, j);*/

	/*int x, y, z;
	z = x = 1, y = 2;
	printf("x=%d, y=%d, z= %d\n", x, y, z);
	z = (x = 1), (y = 2);
	printf("x=%d, y=%d, z= %d\n", x, y, z);
	z = ((x = 1), (y = 2));
	printf("x=%d, y=%d, z= %d\n", x, y, z);*/

	//int my_money = 123,456; //error
	/*int my_money = (123, 456);
	printf("%d\n", my_money);*/

	/*
		simulation of a Moving Object 
		- Speed = 1.0 m/s
		- dt = 1.0s
		- Distance traveled during dt = Speed *dt

		-  step1 : 1.0 m/s * 1.0 s = 1.0m , dist = 1.0 m
		-  step2 : 1.0 m/s * 1.0 s = 1.0m , dist = 1.0 m + 1.0
		-  step3 : 1.0 m/s * 10. s = 10.0m , dist = 1.0 m + 1.0 m + 1.0m
	*/

	/*
		Zeno's Paradox

		-Step 1 : 1.0 * 1.0 , 1.0
		*/
	/*double Time=1.0,ElpasedTime, Speed=1,Distance=0;
	for (ElpasedTime = 1; ElpasedTime <= 10; ElpasedTime++)
	{
		Distance = (Speed * Time) + Distance;
		printf("ElpasedTime =%fs, Distance = %f \n", ElpasedTime, Distance);
	}*/

	const double speed = 1.0;
	const unsigned repeat_max = 50;

	double dist_arch = 0.0, dist_turtle = 1.0;
	double time = 0.0;
	double speed_arch = 10.0;
	double speed_turtle = 0.001;
	double dt = 0.01;

	printf("Time = %fs , dt = %fs , Archilleus = %fm, turtle = %fm\n", time, dt,
		dist_arch, dist_turtle);


	for (int i = 0; i < repeat_max; ++i)
	{

		dist_arch += (dt * speed_arch);
		dist_turtle += (dt * speed_turtle);
		time += dt;

		printf("Time = %fs , dt = %fs , Archilleus = %fm, turtle = %fm\n", time, dt,
			dist_arch, dist_turtle);

		dt *= 0.5;
	}



	return 0;
}