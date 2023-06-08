#include <stdio.h>
#include <math.h>

int main()
{
    long lower, upper;
    printf("This will print all armstrong numbers within a range of numbers\nEnter the lower limit : ");
    scanf("%ld", &lower);
    printf("Enter the upper limit : ");
    scanf("%ld", &upper);

    long ArmstrongNumbers[upper-lower+1];
    int ArmstrongCount = 0;
    int i;
    int sum = 0, digit = 0;
    int Total_digits = 0;

    for (i = lower; i < upper; i++)
    {
        digit = 0;
        int original = i;
        sum = 0;

        for (Total_digits = 0; original != 0; Total_digits++)
        {
            digit = original % 10;
            original = original / 10;
        }

        original = i;

        for (int y = 0; y < Total_digits; y++)
        {
            digit = original % 10;
            sum = pow(digit, Total_digits) + sum;
            original = original / 10;
        }
        

        if (sum == i)
        {
            ArmstrongNumbers[ArmstrongCount] = i;
            ArmstrongCount++;
        }
        
    }
    
    printf("A total of %d armstrong number(s) have been found in between %ld and %ld\n\n", ArmstrongCount, lower, upper);

    printf("The armstrong number(s) found in the given range are as follows : \n[");

    for (int y = 0; y < ArmstrongCount; y++)
    {
        if (y+1 == ArmstrongCount)
        {
            printf("%d]", ArmstrongNumbers[y]);
        }
        else
        printf("%d, ", ArmstrongNumbers[y]);
    }
    

    return 0;
}