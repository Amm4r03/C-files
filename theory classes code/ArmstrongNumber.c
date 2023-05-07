// Code to check if a number input by user is an armstrong number

#include <stdio.h>
#include <math.h>
int main ()
{
    int number, digit, sum, original;
    sum=0;
    original = 0;
    printf("This code will check if the input number is an armstrong number\n");
    printf("Enter a number : ");
    scanf("%d",&number);
    original = number;
    while (number != 0)
    {
        digit = number % 10;
        digit = pow(digit,3);
        sum = digit + sum;
        number = number / 10;
    }

    printf("The sum of cubes of all digits is %d\n",sum);

    if (sum == original)
    {
        printf("%d is an armstrong number",original);
    }
    else
    {
        printf("%d is not an armstrong number",original);
    }
    
    return 0;
}