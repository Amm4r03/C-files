/*
WAP to print out all Armstrong numbers between 1 and 10000
*/

#include <stdio.h>

int power (int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

int main()
{

    int digit, sum = 0;
    int num;

    
    for (int i = 1; i < 10000; i++)
    {
        sum = 0;
        int TotalDigits = 0;
        num = i;
        while (num != 0)        // find the number of digits in the given number
        {
            digit = num % 10;
            num = num / 10;
            TotalDigits++;
        }

        num = i;

        while (num != 0)
        {
            digit = num % 10;
            sum = power(digit, TotalDigits) + sum;
            num = num / 10;
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }
    

    return 0;
}