/*
A 6x6 matrix is entered through the keyboard, WAP to obtain
the determinant value of this matrix
*/

#include <stdio.h>

int main()
{
    int i,j;

    printf("Enter the values for a 6x6 matrix\n");

    int matrix[6][6];

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("Enter the value for (%d, %d) : ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }   
    }


    printf("The array generated is as follows\n\n");
    
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}