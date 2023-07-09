/*
Write a function to compute the greatest common divisor (GCD)
and least common divisor (LCD) for any given two numbers
*/

#include <stdio.h>

void HCFandLCF(int number1, int number2)
{
    int starting = (number1 > number2) ? number2 : number1; // if num1 is greater than num2, we will start looking for
    // HCF from num2 and else we will start from num1
    
    int i;
    for (i = starting; i > 1; i--)
    {
        if ((number1 % i == 0) && (number2 % i == 0))
        {
            printf("%d is the greatest common factor\n", i);
            break;
        }
    }

    if (i == 1) // if the loop has completely executed without finding any HCF, the nos r coprime
    {
        printf("The numbers are coprime, their HCF and their LCF is 1");
    }
    else        // if nos. arent coprime, their LCF is calculated as well
    {
        starting = (number1 > number2) ? number2 : number1;
        for (int y = 2; y < starting; y++)
        {
            if ((number1 % y == 0) && (number2 % y == 0))       // first number to divide both is the LCF
            {
                printf("%d is the lowest common factor", y);
                break;
            }
        }
    }
}

int main()
{
    printf("Enter two numbers : ");
    int n1,n2;
    scanf("%d %d", &n1, &n2);

    HCFandLCF(n1,n2);
    
    return 0;
}