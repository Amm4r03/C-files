// Code to calculate the sum of all digits in a number
#include <stdio.h>
int main()
{
    int number,sum,digit;
    sum=0;
    printf("Enter a number : ");
    scanf("%d", &number);
    while (number != 0)             // used while loop to keep the loop running until the number is not equal to 0
    {
        digit = number % 10;        // extract the right most digit of the number
        sum = digit + sum;          // calculate the sum of digits
        number = number/10;         // remove the right most digit of the number
    }
    printf("The sum of the digits is %d", sum);
    return 0;
}