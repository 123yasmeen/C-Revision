#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void MAX_AND_MIN(int* arr, int, int*, int*);
int main()
{
	int size, max = 0, min = 0;
	printf("enter the size of the array\n");
	scanf("%d", &size);
	int arr[size];
	printf("enter the elements\n");
	for (int i = 0; i < size;i++)
		scanf("%d", &arr[i]);
	MAX_AND_MIN(arr, size, &max, &min);
	printf("the maximun=%d and minimum=%d\n", max, min);
	return 0;
}
void MAX_AND_MIN(int* arr, int size, int* max, int* min)
{
	*max = *(arr), * min = *(arr);
	for (int i = 0;i < size;i++)
	{
		if (*(arr + i) > *max)
			*max = *(arr + i);
		if (*(arr + i) < *min)
			*min = *(arr + i);
	}
}