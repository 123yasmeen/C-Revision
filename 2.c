#include <stdio.h>
#include <stdlib.h>
int main()
{
	int year;
	printf("enter a year\n");
	scanf_s("%d", &year);
	if (year % 4 == 0 && year % 100 != 0)
		printf("A Leap Year\n");
	else if (year % 400 == 0)
		printf("A Leap Year\n");
	else
		printf("Not A Leap Year\n");
	return 0;
}