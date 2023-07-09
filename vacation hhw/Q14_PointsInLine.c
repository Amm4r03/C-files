/* Given 3 points 
(x1, y1)
(x2, y2) and (x3, y3) 

WAP to check if all the three points are all on a straight line */

#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    
    printf("Enter coordinates for x1 and y1 : ");
    scanf("%d %d", &x1, &y1);

    printf("Enter coordinates for x2 and y2 : ");
    scanf("%d %d", &x2, &y2);

    printf("Enter coordinates for x3 and y3 : ");
    scanf("%d %d", &x3, &y3);

    float a = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    if (a < 0)
    {
        a = a * -1;
    }

    float area = 0.5 * a;

    if (area == 0)
    {
        printf("the points are collinear");
    }
    else
    {
        printf("The points are not collinear\nArea of the triangle formed by the 3 points = %0.2f sq. units", area);
    }
    

    return 0;
}