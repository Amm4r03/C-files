/*
Given coordinates (x, y) of the centre of a circle 
and its radius, WAP which will check whether a 
given point (p, q) lies within the circle, on 
the circle or outside the circle
*/

#include <stdio.h>
#include <math.h>       // for calculation of distance from center

int main()
{
    int xc1,yc1;        // coordinates of centre of circle
    int radius;         // radius of circle

    int x2,y2;          // coordinates of point entered

    printf("Enter the coordinates (x,y) of centre of the circle : ");
    scanf("%d %d", &xc1, &yc1);

    printf("Enter the radius of the circle : ");
    scanf("%d", &radius);

    printf("Enter coordinates of point to check if it lies on the circle or not : ");
    scanf("%d %d", &x2, &y2);

    float distance = sqrtf((x2 - xc1) * (x2 - xc1) + (y2 - yc1) * (y2 - yc1));

    if (radius == distance)
    {
        printf("The point (%d, %d) lies on the circle", x2, y2);
    }
    else if (radius > distance)
    {
        printf("The point (%d, %d) lies inside the circle\nDistance to point from centre of circle = %0.2f units", x2, y2, distance);
    }
    else
    {
        printf("the point (%d, %d) lies outside the circle\nDistance to point from centre of circle = %0.2f units", x2, y2, distance);
    }
    
    

    return 0;
}