/*
If two integers are entered through the keyboard, WAP to obtain
the prime factors of this number. (using recursive function)
*/

#include <stdio.h>

void findPrimeFactors(int n, int divisor)
{
    if (n == 1) 
    { 
        return;         // code returns to main if input number is 1
    }

    if (n % divisor == 0)                           // if number is divisible by the divisor
    {
        printf("%d ", divisor);                     // divisor is printed on console
        findPrimeFactors(n / divisor, divisor);     // function called again with number divided by divisor as the new number
    }

    else 
    {
        findPrimeFactors(n, divisor + 1);
        // if no possible factor is found, the divisor is incremented by 1 and the function is called again
    }
    // the function keeps calling itself until it returns 1
}

int main()
{
    int num;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);              // ask user for a number
    
    printf("Prime factors of %d are: ", num);
    findPrimeFactors(num, 2);       // find its prime factors, starting from 2
    
    return 0;
}