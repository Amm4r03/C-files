/*
5
5   4
5   4   3
5   4   3   2
5   4   3   2   1
*/

#include <stdio.h>
int main ()
{
    int lines;
    printf("Enter the number of lines for which the pattern is to be printed : ");
    scanf("%d", &lines);

    int count;

    for (int i = 0; i < lines; i++)
    {
        count = lines;

        for (int j = 0; j <= i; j++)
        {
            printf("%d\t", count - j);

        }
        printf("\n");
    }
    

    return 0;
}