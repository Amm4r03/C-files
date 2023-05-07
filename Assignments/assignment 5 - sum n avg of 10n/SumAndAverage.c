//aim : to write a program to enter 10 numbers and calculate their sum and average
#include <stdio.h>
int main()
{
    int numbers[10];                // declare numbers array of size 10
    int sum;
    float average;
    int i;
    printf("Enter 10 numbers : ");
    for (i = 0; i < 10; i++)        // for loop to take input for the numbers array
    {
        scanf("%d", &numbers[i]);   // input
        sum = sum + numbers[i];     // calculate sum of numbers after each iteration of the loop
    }
    
    average = (float)sum/i;         // calculate average by dividing the sum by total number of iterations(10)
    printf("sum of the numbers is %d\n", sum);
    printf("the average of the numbers is %0.2f\n", average);
    return 0;
}