#include <stdio.h>
#include <stdlib.h>
int MAX(int, int, int, int);
int MIN(int, int, int, int);
int main()
{
	int num1, num2, num3, num4;
	printf("Enter 4 numbers\n");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);
	scanf_s("%d", &num4);
	printf("the maximum number: %d\n", (MAX(num1, num2, num3, num4)));
	printf("the minimum number: %d\n", (MIN(num1, num2, num3, num4)));
	return 0;
}
int MAX(int a, int b, int c, int d)
{
	int max = (a > b) ? (a > c) ? (a > d) ? a : d : c : (b > c) ? (b > d) ? b : d : (c > d) ? c : d;
	return max;
}
int MIN(int a, int b, int c, int d)
{
	int min = (a < b) ? (a < c) ? (a < d) ? a : d : c : (b < c) ? (b < d) ? b : d : (c < d) ? c : d;
	return min;
}