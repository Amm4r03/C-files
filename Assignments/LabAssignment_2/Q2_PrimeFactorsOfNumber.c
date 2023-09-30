// Question 2 : prime factors of a number using a function (called recursively)

#include <stdio.h>

void PrimeFactors(int number, int divisor)      // function for determining prime factors of a number
{
    if (number == 1)                    // if the number is 1, function returns to main
    {
        return;
    }

    if (number % divisor == 0)          // if the number is divisible by the divisor, it prints the divisor
    {
        printf("%d ", divisor);
        PrimeFactors(number/divisor, divisor);      // the function is then called again after dividing the number
    }
    
    else
    {
        PrimeFactors(number, divisor + 1);      // else, the function tries the number with the next divisor
    }
    
}

int main()
{
    printf("Enter a number : ");
    int number;
    scanf("%d", &number);
    
    printf("the prime factors of the number are : ");
    PrimeFactors(number, 2);                    // function is initially started with 2 as divisor
    
    return 0;
}