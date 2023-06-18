// calculates the sum of all even numbers between one and n (input by user)

#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    int sum = 0;

    for (int i = 2; i <= number; i+=2)
    {
        sum = sum + i;
    }

    printf("Sum of all even numbers from 1 to %d is %d", number, sum);
    
    
    return 0;
}