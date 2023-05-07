//Aim: Write a program in C to input the day of the week in numeric form and display in words using if-else
#include <stdio.h>
int main()
{
    int day;
    printf("Enter a day in numeric form (1-7) : ");
    scanf("%d",&day);
    if (day==1)
    {
        printf("Monday");
    }
    else if (day==2)
    {
        printf("Tuesday");
    }
    else if (day==3)
    {
        printf("Wednesday");
    }
    else if (day==4)
    {
        printf("Thursday");
    }
    else if (day==5)
    {
        printf("Friday");
    }
    else if (day==6)
    {
        printf("Saturday");
    }
    else
    {
        printf("Sunday");
    }
    return 0;
}