// write a program to convert a decimal number to its binary equivalent (using recursion)

#include <stdio.h>

int DecToBin(int number)
{
    if(number > 0)
    {
        DecToBin(number/2);
        printf("%d ", number % 2);
    }
}

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    printf("Binary equivalent : ");
    DecToBin(number);

    return 0;
}