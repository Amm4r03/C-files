// Aim: To write a Program to illustrate the use of relational operators in C

#include <stdio.h>
int main()
{
    int a = 15;      //variable initiation and declaration
    int b = 12;
    printf("A = %d \nB = %d\n",a,b);    //display the numbers 
    if (a==b)                           //check if a and b are equal
    {
        printf("A is equal to B\n %d = %d\n",a,b);
    }
    else
    {
        printf("A is not equal to B\n");    //nested if else to check if a is greater or less than b
        if (a>b)                            //given that they are not equal
        {
            printf("A is greater than B");
        }
        else
        {
            printf("A is less than B");
        }
    }
    
    return 0;
}