// Code to check if a number input by user is an armstrong number

#include <stdio.h>
#include <math.h>
int main ()
{
    int number, original;
    double digit, sum;
    int total_digits = 0;
    sum = 0;
    original = 0;
    printf("This code will check if the input number is an armstrong number\n");
    printf("Enter a number : ");
    scanf("%d",&number);
    original = number;
    int power = 0;

    for (total_digits = 0; number != 0; total_digits++)
    {
        digit = number % 10;
        number = number / 10;
    }

    number = original;
    
    for (int i = 0; i < total_digits; i++)
    {
        
        digit = number % 10;
        number = number / 10;
        sum = pow(digit, total_digits) + sum;
    }
    

    printf("The sum of cubes of all digits is %0.f\n",sum);

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