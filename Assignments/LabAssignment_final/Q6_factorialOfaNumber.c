/*
;===========================================,
; Author :      Ammar Ahmad Kidwai          |
; Class :       BTCSE-AI, year1Sem2         |
; Date:         19 July 2023                |
;===========================================;
*/

// WAP to compute factorial of a given positive integer number input by the user. Make use of while loop.

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