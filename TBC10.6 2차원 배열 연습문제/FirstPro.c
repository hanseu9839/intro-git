#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MONTHS 12
#define YEARS 3


int main()
{
	double temperature[YEARS][MONTHS] = { { 2.7, -4.0, 5.0, 9.0, 20.1, 23.3, 25.3, 28.6, 23.3, 18.2, 14.4, -2.2 } ,
		   { -1.3, -4.0, -0.2, 15.6, 20.4, 23.8, 21.9, 33.6, 25.5, 15.4, 8.4, 5.5 },
		   { -5.0, -2.1, 6.6, 5.5, 16.4, 18.9, 23.9, 26.3, 23.7, 23.1, 14.9, 4.6 },
	};
	double sum=0;
	double avg;
	int count=0;
	printf("[Temperature Data]\n");
	printf("Year index : \t");
	for (int i = 0; i < MONTHS; ++i)
		printf("%d\t", i+1);
	printf("\n");
	for (int j = 0; j < YEARS; ++j)
	{
		printf("Year %d\t:\t", j);
		for (int i = 0; i < MONTHS; ++i)
			printf("%.1f\t", temperature[j][i]);
		printf("\n");
	}

	printf("[Yearly average temperatures of 3 years]\n");
	for (int j = 0; j < YEARS; j++)
	{
		printf("Year %d : ", j);
		for (int i = 0; i < MONTHS; i++)
		{
			sum += temperature[j][i];
			
		}
		avg = sum / MONTHS;
		sum = 0;
		printf("average temperature = %.1f\n", avg);
	}
	printf("\n");
	printf("[Monthly average temperatures for 3 years]\n");
	printf("Year index  :\t");
	for (int i = 0; i < MONTHS; i++)
		printf("%d\t", i+1);
	printf("\n");
	for (int i = 0; i < MONTHS; i++)
	{
		if(i==0)
			printf("Avg temps  :");
		for (int j = 0; j < YEARS; j++)
		{
			
			sum += temperature[j][i];
			count++;
		}	
		avg = sum / count;
		printf("\t%.1f", avg);
		sum = 0;
		count = 0;
	}
	printf("\n");

	return 0;
}

