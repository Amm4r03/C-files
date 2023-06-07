#include <stdio.h>
int main()
{
    long num;
    
    printf("Enter a number : ");
    scanf("%ld", &num);

    if (num == 2)
    {
        printf("Number is prime");
    }

    else if (num % 2 == 0)
    {
        printf("Number is not prime");
    }

    else if (num < 2)
    {
        printf("Number is not prime");
    }

    else
    {
    int i;
    for (i = 3; i <= ((num/2) + 1); i++)
    {
        if(num % i == 0)
        break;
    }
    if (i >= ((num/2)+1))
    {
        printf("Number is prime");
    }
    else
    {
        printf("number is not prime");
    }
    }

    return 0;
}