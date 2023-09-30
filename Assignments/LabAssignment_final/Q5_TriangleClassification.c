/*
If the three sides of a triangle are entered through the keyboard,
WAP to check whether the triangle is isosceles, equilateral, and
scalene or right angle triangle.
*/

/*
;===========================================,
; Author :      Ammar Ahmad Kidwai          |
; Class :       BTCSE-AI, year1Sem2         |
; Date:         19 July 2023                |
;===========================================;
*/

#include <stdio.h>
int main()
{
    int s1, s2, s3;
    
    printf("Enter length of 3 sides of a triangle : ");
    scanf("%d %d %d", &s1, &s2, &s3);


    if ((s1 + s2) > s3 && (s2 + s3) > s1  && (s3 + s1) > s2)
    {
            if (s1 == s2 && s2 == s3 && s3 == s1)
        {
            printf("The given lengths would form an equilateral triangle\n");
        }
        else if(s1 == s2 || s2 == s3 || s1 == s3)
        {
            printf("the given lengths would form an isoceles triangle\n");
        }
        else
        {
            printf("the given lengths would form a scalene triangle\n");
        }
        

        if (s1 * s1 == s2 * s2 + s3 * s3 || s2 * s2 == s1 * s1 + s3 * s3 || s3 * s3 == s1 * s1 + s2 * s2)
        {
            printf("The given lengths would also form a right angled triangle");
        }
    }

    else
    {
        printf("the triangle of the given lengths is not possible");
    }
    
    return 0;
}