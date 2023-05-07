#include <stdio.h>
#include <math.h>

int main()
{
    int digit, sum, i, number;
    int lower, upper, count;
    
    printf("Please enter the lower and upper limits to find Armstrong numbers between: ");
    scanf("%d %d", &lower, &upper);
    
    printf("Armstrong numbers between %d and %d:\n", lower, upper);
    count = 0;
    for (i = lower; i <= upper; i++)
    {
        number = i;
        sum = 0;
        while (number != 0)
        {
            digit = number % 10;
            sum += pow(digit, 3);
            number /= 10;
        }

        if (i == sum) {
            printf("%d ", i);
            count++;
        }
    }
    
    if (count == 0) {
        printf("No Armstrong numbers found between %d and %d.\n", lower, upper);
    }
    else {
        printf("\nTotal Armstrong numbers found: %d\n", count);
    }
    
    return 0;
}