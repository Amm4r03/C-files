// finds sum of all digits in a number recursively

#include <stdio.h>

int sumOfNumbers(int number)
{
    if (number > 0)
    {
        int digit = number % 10;
        return digit + sumOfNumbers(number / 10);
    }
    else
    return 0;
}

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    printf("sum of digits in the number = %d", sumOfNumbers(number));
    return 0;
}