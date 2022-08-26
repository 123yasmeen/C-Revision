#include <stdio.h>
#include <stdlib.h>
int main()
{
	int op1, op2,choice;
	printf("enter the first operand\n");
	scanf_s("%d", &op1);
	printf("enter the second operand\n");
	scanf_s("%d", &op2);
	printf("what mathematical operation you want to do press 1 for summation 2 for subtraction 3 for product 4 for division\n");
	scanf_s("%d", &choice);
	switch (choice)
	{
	case 1:
		printf("the summation: %d\n", op1 + op2);
		break;
	case 2:
		printf("the subtraction: %d\n", op1 - op2);
		break;
	case 3:
		printf("the product: %d\n", op1 * op2);
		break;
	case 4:
		printf("the division: %d\n", op1 / op2);
	}
	return 0;
}