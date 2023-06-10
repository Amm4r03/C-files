#include <stdio.h>

int fact(int number)
{
    int fact = 1;
    for (int i = 1; i <= number; i++)
    {
        fact = i * fact;
    }
    return fact;
}

int main()
{
    int number, factorial;
    printf("Enter a number : ");
    scanf("%d", &number);

    factorial = fact(number);

    printf("factorial of %d is %d\nOr, %d! = %d", number, factorial, number, factorial);

    return 0;
}