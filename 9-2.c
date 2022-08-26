#include <stdio.h>
#include <stdlib.h>
int main()
{
	int number,bit;
	printf("enter a number\n");
	scanf_s("%d", &number);
	printf("enter the nth bit\n");
	scanf_s("%d", &bit);
	printf("the %d bit is set to %d\n", bit, (number >> bit) & 1);
	return 0;
}