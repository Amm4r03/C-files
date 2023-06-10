// code to check if a number is prime or not
// and print out all the divisors of the number if it isnt prime
// print and the number and 1 as divisors if its prime

#include <stdio.h>

int PrimeStatus(int number)
{
    int prime = 0;      // flag for determining if number is prime or not
    if (number < 2)
    {
        prime = 0;
        return prime;
    }
    if (number == 2)
    {
        prime = 1;
        return prime;
    }
    if (number % 2 == 0)
    {
        prime = 0;
        return prime;
    }

    prime = 1;  // assume number to be prime 

    for (int i = 3; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            prime = 0;      // if number is divisible by any number, flag changed to 0 (false) and
            return prime;   // returned to main
        }
    }
    return prime;           // if full loop goes without triggering the inner condition, number is prime
}

void divisors(int number)
{
    for (int i = 1; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            if (number/i == i)
            {
                printf("%d", i);
            }
            else
            {
                printf("%d, %d, ", i, number/i);
            }
        }   
    }
}

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    int original = number;

    int isPrime = PrimeStatus(number);

    if (isPrime)
    {
        printf("%d is a prime number\nIts divisors are : [1, %d]", original, original);
    }
    else
    {
        printf("%d is not a prime number\nIts divisors are as follows\n", original);
        divisors(number);
    }


    return 0;
}