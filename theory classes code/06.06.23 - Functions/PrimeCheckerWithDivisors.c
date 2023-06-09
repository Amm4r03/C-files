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

void divisors(int number, int *divisors_array, int *count_of_divisors)
{
    int i;
    (*count_of_divisors) = 0;      // counts the number of occurrences
    for (i = 1; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            if (number / i == i)
            {
                divisors_array[*count_of_divisors] = i;
                (*count_of_divisors)++;
            }
            else
            {
                divisors_array[*count_of_divisors] = i;
                (*count_of_divisors)++;
                divisors_array[*count_of_divisors] = (number/i);
                (*count_of_divisors)++;
            }
        }
    }
}

int main()
{
    int number;

    printf("Enter a number : ");
    scanf("%d", &number);
    
    int divisors_array[100];

    int original = number;

    int isPrime = PrimeStatus(number);

    if (isPrime)
    {
        printf("%d is a prime number\nIts divisors are : [1, %d]", original, original);
    }
    else
    {
        int count;
        divisors(number, divisors_array, &count);
        
        printf("%d is not a prime number\nIts %d divisors are as follows\n", original, count);

        printf("[");
        for (int i = 0; i < count; i = i + 2)
        {
            printf("%d, ", divisors_array[i]);
        }
        for (int i = count - 1; i > 0; i = i - 2)
        {
            if (i-1 == 0)
            {
                printf("%d]", divisors_array[i]);
            }
            else
            printf("%d, ", divisors_array[i]);
        }
        
    }


    return 0;
}