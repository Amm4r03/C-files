// checks if the number is prime or not

// currently not working as intended
#include <stdio.h>
int main()
{
    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    int i;
    for (i = 2; i <= (number/2)+1 ; i++)
    {
        if (number % i == 0)
        {
            break;
        }
    }

    if (i >= (number/2)+1)
    {
        printf("%d is a prime number", number);
    }
    else
    {
        printf("%d is not a prime number", number);
    }
    
    
    return 0;
}