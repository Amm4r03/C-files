// trying to make the code print out the matrix inside the square brackets


/* 
┌       ┐           // first line :     inverted L characters - no numbers yet
│ 12  3 │           // second line :    pipes on the side - numbers for first row inside
│ -5  4 │           // third line :     pipes (same) - numbers for the second row inside
└       ┘           // fourth line :    inverted L characters again

the final matrix should look somewhat like this
*/

#include <stdio.h>

int main()
{
    int size;
    printf("Enter size of matrix : ");
    scanf("%d", &size);

    int i, j;
    int Matrix[size][size];

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("Enter the value for (%d, %d) : ", i+1, j+1);
            scanf("%d", &Matrix[i][j]);
        }   
    }
    
    printf("The matrix generated is as follows :\n");
    
    int firstSpace = 3;
    int midSpace = 7;
    int lastSpace = 5;

    for (i = -1; i < size; i++)
    {
        if (i == -1)
        {
            printf("┌  ");
            for (int y = 0; y < size; y++)
            {
                printf("   ");
            }
            printf("┐\n");
            continue;
        }

        if (i > -1 && i < size)
        {
            printf("│");
            for (j = 0; j < size; j++)
            {

                if (j == 0 && j+1 == size)
                {
                    printf("%3d  ", Matrix[i][j]);
                    break;
                }
                
                if (j == 0)
                {
                    printf("%3d", Matrix[i][j]);
                }
                
                else if (j + 1 == size)
                {
                    printf("%3d  ", Matrix[i][j]);
                }
                
                else
                {
                printf("%5d  ", Matrix[i][j]);
                }
            }
            printf("│\n");
        }

        if (i + 1 == size)
        {
            printf("└  ");
            for (int y = 0; y < size; y++)
            {
                printf("   ");
            }
            printf("┘\n");
        }
    }

    return 0;
}
