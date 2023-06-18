// Write a program to find the greatest common divisor (GCD) of two numbers

#include <stdio.h>
int main()
{
    printf("Calculates the greatest common divisor of two number input by user\n");
    for (int i = 0; i <= 40; i++)
    {
        printf("-");
    }
    printf("\n");
    
    int num1, num2;
    printf("Enter a number : ");
    scanf("%d", &num1);
    printf("Enter another number : ");
    scanf("%d", &num2);

    int starting = (num1 > num2) ? num2 : num1; // if num1 is greater than num2, we will start looking for
    // HCF from num2 and else we will start from num1
    
    int i;
    for (i = starting; i > 1; i--)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            printf("%d is the greatest common factor", i);
            break;
        }
    }

    if (i == 1) // if the loop has completely executed without finding any HCF, the nos r coprime
    {
        printf("The numbers are coprime, their HCF is 1");
    }

    return 0;
}