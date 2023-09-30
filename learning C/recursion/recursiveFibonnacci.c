// recursive fibonacci

#include <stdio.h>

int fibonacci(int number)
{
    if (number == 1)
    {
        return 1;
    }
    else if (number <= 0)
    {
        return 0;
    }
    
    else
    {
        return fibonacci(number - 2) + fibonacci(number - 1);
    }
}

int main()
{
    int number;
    printf("enter to see the fibonacci sequence till that term : ");
    scanf("%d", &number);

    printf("fibonacci sequence : ");

    for (int i = 0; i < number; i++)
    {
        printf("%d ", fibonacci(i));
    }
    

    return 0;
}