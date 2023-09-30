/*
Given a point (x, y), WAP to find out if it lies on the x axis, y
axis or on the origin
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
    int x1, y1;

    printf("Enter coordinates for a point : ");
    scanf("%d %d", &x1, &y1);

    if (x1 == 0 && y1 == 0)
    {
        printf("the point lies on the origin");
    }
    else if (x1 == 0)
    {
        printf("the point lies on the y axis");
    }
    else if (y1 == 0)
    {
        printf("the point lies on the x axis");
    }
    else
    {
        if (x1 > 0 && y1 > 0)
        {
            printf("The point lies in first quadrant");
        }
        else if (x1<0 && y1 > 0)
        {
            printf("The point lies in second quadrant");
        }
        else if (x1 < 0 && y1 < 0)
        {
            printf("The point lies in third quadrant");
        }
        else
        {
            printf("The point lies in the fourth quadrant");
        }
    }
    
    return 0;
}