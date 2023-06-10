// WAF to check if a number is prime

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

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    int original = number;

    int isPrime = PrimeStatus(number);

    if(isPrime)
    {
        printf("%d is a prime number", original);
    }
    else
    {
        printf("%d is not a prime number", original);
    }

    return 0;
}