#include <stdio.h>
#include <math.h>

int main()
{
    int digit,sum,i,number;
    int lower,upper;
    sum = 0;

    printf("Please enter the numbers between which armstrong numbers are to be found : ");
    scanf("%d %d", &lower, &upper);
    printf("between the numbers %d and %d - in the range of %d numbers : \n",lower,upper,upper-lower);

    for (i = lower; i <= upper; i++)
    {
        int num = i;
        while (num != 0)
        {
            num = num % 10;
            sum = num + sum;
            num = num / 10;
        }

    }
    
    return 0;
}