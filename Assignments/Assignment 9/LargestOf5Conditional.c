// Aim: Write a program to find the largest of 5 integer numbers input by the user using if-else
#include <stdio.h>
int main()
{
        printf("Enter 5 numbers\n");
    int n1,n2,n3,n4,n5;
    fflush(stdin);
    printf("Enter value for first number : ");
    scanf("%d", &n1);
    printf("Enter value for second number : ");
    scanf("%d", &n2);
    printf("Enter value for third number : ");
    scanf("%d", &n3);
    printf("Enter value for fourth number : ");
    scanf("%d", &n4);
    printf("Enter value for fifth number : ");
    scanf("%d", &n5);
    if (n1>n2 && n1>n3 && n1>n4 && n1>n5)
    {
        printf("%d is the largest number",n1);
    }
    else if (n2>n3 && n2>n4 && n2>n5)
    {
        printf("%d is the largest number",n2);
    }
    else if (n3>n4 && n3>n5)
    {
        printf("%d is the largest number",n3);
    }
    else if (n4>n5)
    {
        printf("%d is the largest number",n4);
    }
    else
    {
        printf("%d is the largest number",n5);
    }
    return 0;
}