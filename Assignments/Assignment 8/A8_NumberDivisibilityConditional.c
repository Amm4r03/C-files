// Aim: Write a program to input an integer number from the keyboard and check if it is divisible by 3 and 5
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if (num%3==0 && num%5==0)
    {
        printf("%d is divisible by both 3 and 5", num);
    }
    else
    printf("%d is not divisble by both 3 and 5", num);
    
    return 0;
}