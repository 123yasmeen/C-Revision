#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,evennum=0,oddnum=0;
	printf("enter the size of the array");
	scanf_s("%d",&size);
	int arr[size];
	printf("enter the elements");
	for (int i = 0;i < size;i++)
	{
		scanf_s("%d", &arr[i]);
		if (arr[i] % 2 == 0)
			evennum++;
		else
			oddnum++;
	}
	printf("total even elements:%d\n", evennum);
	printf("total odd elements:%d\n", oddnum);
	return 0;
}