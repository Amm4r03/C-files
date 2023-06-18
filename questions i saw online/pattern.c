/*

input = 3


output : 

3   3   3   3   3
3   2   2   2   3
3   2   1   2   3
3   2   2   2   3
3   3   3   3   3

*/

#include <stdio.h>

int minimumDistance(int x, int y, int input);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 0; i < ( 2 * n ) - 1; i++)
    {
        for (int y = 0; y < (2 * n ) - 1; y++)
        {
            int minimum = minimumDistance(y, i, n);
            printf("%3d", n - minimum);
        }
        printf("\n");
    }

    return 0;
}

int minimumDistance(int x, int y, int input)
{
    int size = 2 * input - 1;
    int horizontal_dist = (input - 1 - x);
    int vertical_dist = (input - 1 - y);

    if (horizontal_dist < 0)
    {
        horizontal_dist = horizontal_dist * (-1);
    }
    if (vertical_dist < 0)
    {
        vertical_dist = vertical_dist * (-1);
    }

    return horizontal_dist < vertical_dist ? horizontal_dist : vertical_dist;
    
}