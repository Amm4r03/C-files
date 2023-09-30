/*
WAP in C to enter the age of 5 students and find the average
age. The control should skip to the beginning of the loop when 
the age is entered as 0
*/

#include <stdio.h>
int main()
{
    int age[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("enter the age of student %d : ", i+1);
        scanf("%d", &age[i]);
        if (age[i] == 0)
        {
            printf("invalid age entered, please try again\n");
            i = -1;
            sum = 0;
        }
        else
        {
            sum = sum + age[i];
        }
    }

    float average = (float) sum / 5;

    printf("The average age is %0.2f years", average);

    return 0;
}