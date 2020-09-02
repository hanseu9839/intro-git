#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> // strcmp()
void swap(char** xp, char** yp);
void printStringArray(char* arr[], int size);
void selectionSort(char* arr[], int n);
int main()
{
	char* arr[] = { "Cherry","AppleBee","Apple","Orange" };
	int n = size(arr) / sizeof(arr[0]);
	return 0;
}	
void printStringArray(char* arr[], int size)
{
	for (int i = 0; i < size; i++)
		puts(arr[i]);
	printf("\n");
}
void swap(char** xp, char** yp)
{
	int temp=*xp; 
	*xp = *yp;
	*yp = temp;
}
void selectionSort(char* arr[], int n)
{
	int min_idx;
	for (int i = 0; i < n - 1; i++)
	{
		int min_idx = i;
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(arr[j],arr[min_idx]>0)
				min_idx = j;
			// Swap the found minum element with first element 
			/* char* temp = arr[min_idx];
			arr[min_idx] = arr[i];
			arr[i] = temp */
			swap(&arr[i], &arr[min_idx]);
		}
	}
}