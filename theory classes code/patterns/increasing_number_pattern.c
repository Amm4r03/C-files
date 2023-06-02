/*
1
2  3
4  5  6
7  8  9  10
*/

#include <stdio.h>
int main()
{
    int lines;
    printf("Enter number of lines for which pattern is to be printed : ");
    scanf("%d", &lines);

    int count = 1;

    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d\t", count);
            count++;
        }
        printf("\n");
    }
    

    return 0;
    printf("%d",count);
}