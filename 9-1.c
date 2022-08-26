#include <stdio.h>
int main()
{
    int number, result = 0, base = 1, remainder;

    printf("Enter the number\n");
    scanf_s("%d", &number);
    while (number != 0)
    {
        remainder = number % 10;
        result += remainder * base;
        number /= 10;
        base = base * 2;
    }
    printf("The number in decimal = %d\n", result);
    return 0;
}