// prints factorial of a number recursively

#include <stdio.h>

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}

int main()
{
    printf("enter a number : ");
    int number;
    scanf("%d", &number);
    printf("%d", factorial(number));
    return 0;
}