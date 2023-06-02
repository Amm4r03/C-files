/*
1
1   2
1   2   3
*/

#include <stdio.h>
int main()
{
    int lines;
    printf("number of lines for which pattern is to be printed : ");
    scanf("%d", &lines);
    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    
    return 0;
}