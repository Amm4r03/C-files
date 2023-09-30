// given 3 points, WAP to check if all three points are all on a straight line

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
int x1, y1, x2, y2, x3, y3;

printf("Point 1 \nEnter the value for x1 AND y1 (separated by space): ");

scanf("%d %d", &x1, &y1);

printf("Point 2 \nEnter the value for x2 AND y2 (separated by space): "); 

scanf("%d %d", &x2, &y2);

printf("Point 3 \nEnter the value for x3 AND y3 (separated by space): "); scanf("%d %d", &x3, &y3);


printf("The points entered are as follows :\npoint1: (%d, %d)\npoint 2: (%d, %d)\npoint 3: (%d, %d)", x1,y1,x2,y2, x3,y3);


float area = 0.5* (x1*(y2-y3) + (x2*(y3-y1)) + (x3* (y1-y2)));


if(area == 0)

printf("\nthe points are in a straight line");


else

{

printf("\nThe points are not in a straight line");

}

return 0;

}
