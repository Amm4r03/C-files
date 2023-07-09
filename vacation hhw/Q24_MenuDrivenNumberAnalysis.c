/*
WAP menu driven program which has following options:
1) Compute a^b
2) Entered number prime or not
3) Entered number odd or even
4) exit
*/

#include <stdio.h>

void Dashes()
{
    for (int i = 0; i < 40; i++)
    {
        if (i + 1 == 40)
        {
            printf("-\n");
        }
        else if (i == 0)
        {
            printf("\n-");
        }
        else
        printf("-");
    }
    return;
}

int powerCalculation(int base, int exponent)
{
    int result = 1;
    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }
    return result;
}

void PrimeChecker(int number)
{
    if (number < 2)
    {
        printf("%d is not prime", number);
        return;
    }
    else if (number == 2)
    {
        printf("%d is prime", number);
        return;
    }
    else if (number % 2 == 0)
    {
        printf("%d is not prime", number);
        return;
    }
    else
    {
        int i;
        for (i = 3; i < (number/2) + 1; i = i + 2)
        {
            if (number % i == 0)
            {
                printf("%d is not prime", number);
                break;
            }
        }
        if (i >= (number/2) + 1)
        {
            printf("%d is a prime number", number);
            return;
        }
    }
}

int OddEvenCheck(int number)
{
    if (number % 2 == 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void quit()
{
    return 0;
}

int main()
{
    int input;
    printf("Enter a number\n1 : to calculate a raised to power b\n2 : to check if input number is a prime\n3 : to check if the input number is odd or even\n4 : exit the program\n\nEnter a number : ");
    scanf("%d", &input);

    while (input > 4 || input < 1)
    {
        printf("invalid input - please try again\nEnter a number : ");
        scanf("%d", &input);
    }
    
    if (input == 1)
    {
        int power, base;
        printf("exponent calculation\n");

        Dashes();
        
        printf("Enter a base number : ");
        scanf("%d", &base);

        printf("Enter the exponential power : ");
        scanf("%d", &power);

        int final = powerCalculation(base, power);

        printf("%d to the power %d is %d", base, power, final);

        Dashes();
    }

    else if (input == 2)
    {
        printf("Prime Checker");

        Dashes();

        int number;
        
        printf("Enter a number : ");
        scanf("%d", &number);
        
        PrimeChecker(number);
        Dashes();
    }

    else if (input == 3)
    {
        printf("Odd or Even");
        Dashes();
        
        int number;
        
        printf("enter a number : ");
        scanf("%d", &number);
        
        int status = OddEvenCheck(number);
        
        if (status == 1)
        {
            printf("%d is even", number);
        }
        
        else
        printf("%d is odd", number);
        Dashes();
    }

    else if (input == 4)
    {
        quit();
    }
    
    return 0;
}