#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str1[20];
	printf("enter a string\n");
	gets(str1);
	int n = strlen(str1);
	char str2[n + 1];
	for (int i = 0;i < n;i++)
		str2[i] = str1[i];
	printf("%s", str2);
	return 0;
}