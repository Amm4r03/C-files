/*
;===========================================,
; Author :      Ammar Ahmad Kidwai          |
; Class :       BTCSE-AI, year1Sem2         |
; Date:         19 July 2023                |
;===========================================;
*/

/*
If the three sides of a triangle are entered through the keyboard,
WAP to check whether the triangle is valid or not. The triangle
is valid if the sum of two sides is greater than the largest of the
third sides.
*/

#include <stdio.h>

int main()
{
    int s1, s2, s3;
    
    printf("Enter length of 3 sides of a triangle : ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if ((s1 + s2) > s3 && (s2 + s3) > s1  && (s3 + s1) > s2)
    {
        printf("the triangle of the given lengths is valid");
    }
    else
    {
        printf("the triangle of the given lengths is not possible");
    }
    

    return 0;
}