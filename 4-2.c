#include <stdio.h>
#include <stdlib.h>
int main()
{
	int number, power,result=1;
	printf("enter the number\n");
	scanf_s("%d", &number);
	printf("enter the power\n");
	scanf_s("%d", &power);
	for (int i = 0;i < power;i++)
		result *= number;
	printf("the answer: %d\n", result);
	return 0;
}