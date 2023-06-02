/*
6
5   4   
3   2   1
*/

/*
10
9   8
7   6   5
4   3   2   1
*/

#include <stdio.h>

int main()
{
    int lines;

    printf("Enter number of lines for which pattern is to be printed : ");
    scanf("%d", &lines);
    
    int count = lines;

    for (int i = lines ; i > 0; i--)
    {   
        for (int j = lines; j >= i; j--)
        {
            printf("%d\t", count);
            count--;
        }
        printf("\n");
    }

    return 0;
}

// error in output, needs fixing