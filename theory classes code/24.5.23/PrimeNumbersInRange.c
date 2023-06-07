#include <stdio.h>
int main()
{
    int upper, lower, number;
    printf("This program will check for prime numbers within a given range\n");
    
    printf("Enter the lower limit : ");
    scanf("%d", &lower);
    printf("Enter the upper limit : ");
    scanf("%d", &upper);
    
    int prime = 0;
    int PrimeCount = 0;

    for (int i = lower; i <= upper; i++)
    {
        if (i < 2)
        {
            prime = 0;
        }

        else if (i == 2)
        {
            prime = 1;
            PrimeCount = PrimeCount + 1;
        }

        else if (i % 2 == 0)
        {
            prime = 0;
        }

        else
        {
            prime = 1;
            for (int y = 3; y <= ((i/2)+1) ; y++)
            {
                if (i % y == 0)
                {
                    prime = 0;
                    break;
                }
            }
            if (prime == 1)
            {
                PrimeCount++;
            }
            
        }
    }
    
    printf("%d prime numbers have been found in between %d and %d", PrimeCount, lower, upper);

    return 0;
}