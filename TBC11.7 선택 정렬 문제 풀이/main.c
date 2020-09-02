#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
	Selection Sort Algorithm 

	Yoututbe search "Selection Sort", "C550"

	64 25 12 22 11 (min_idx = 0)
	   64		   (min_idx = 0)
	   25		   (min_idx = 1)
	      25	   (min_idx = 1)
		  12	   (min_idx = 2)
		     12    (min_idx = 2)
			    11 (min_idx = 4)
	11 25 12 22 64 (swap arr[0] and arr[4])
	*/


void swap(int* xp, int* yp);
void printArray(int arr[], int size);
void selectionSort(int arr[], int n);

int main()
{
	
	int arr[5] = { 64, 25, 12, 22, 11 };
	int n = sizeof(arr) / sizeof(arr[0]);

	selectionSort(arr, n);
	printArray(arr, n);
	return 0;
}
void swap(int* xp, int* yp)
{
	int temp= *xp; 
	*xp = *yp;
	*yp = temp;
}
void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);	
	}
	printf("\n");
}
void selectionSort(int arr[], int n)
{
	int min_idx;
	for (int i = 0; i < n - 1; i++)
	{
		min_idx = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[min_idx] > arr[j])
				min_idx = j;
			swap(&arr[min_idx], &arr[i]);
		}
	}

}