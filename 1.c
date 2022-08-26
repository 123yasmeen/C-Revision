#include <stdio.h>
#include <stdlib.h>
int main()
{
	int number,count1s=0,count0s=0;
	printf("enter a number\n");
	scanf_s("%d", &number);
	for (int bit = 0;bit <= 31;bit++)
	{
		int get = (number >> bit) & 1;
		if (get == 1)
			count1s++;
		else if (get == 0)
			count0s++;
	}
	printf("the number of 1s: %d\n", count1s);
	printf("the number of 0s: %d\n", count0s);
	return 0;
}