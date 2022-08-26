#include <stdio.h>
#include <stdlib.h>
int main()
{
	int number, remainder = 0;
	printf("enter a number\n");
	scanf_s("%d", &number);
	while (number != 0)
	{
		remainder += number % 10;
		number/= 10;
	}
	printf("the sum of digits: %d\n",remainder);
	return 0;
}