// Aim: Write a program to illustrate the use of bitwise operators in C.
#include <stdio.h>
int main()
{
    int a,b;                                //declaration of a and b
    printf("enter two numbers : ");         
    scanf("%d %d", &a,&b);                  
    printf("AND operator -> a&b = %d\n",a&b);
    printf("OR operator -> a OR b = %d\n", a|b);
    printf("XOR operator -> a XOR b = %d\n", a^b);
    printf("NOT operator -> a NOT = %d\n", ~a);
    return 0;
}